#ifndef __LMBCS_H
#define __LMBCS_H

// This is a table of LMBCS codes and their UTF-8 equivalent sequence.
// See Appendix 2 of the 1-2-3 R3.1 Reference.
//
// The intention here is that we can encode UTF-8 input to the internal
// lmbcs sequence directly from the keymap. As a user enters a UTF-8
// character, we can check if there is a LMBCS encoding and use that.
//
// This only works for characters that have a LMBCS encoding, but it's a start.
// See issue #73.
//
// Eventually, 123 should use UTF-8 instead of LMBCS.
//
// Known problems:
//  - LMBCS has a diacritic symbols, should they be comibining or spacing?
//  - There does not seem to be a Krone symbol in unicode.
//  - LMBCS has the character "l bullet", what is that?
//  - LMBCS has box drawing characters, but doesn't specify light/heavy/etc.
static struct {
    uint16_t    lmbcs;
    const char  *str;
} lmbcs_input_translate[] = {
    { 128, "Ç" },
    { 129, "ü" },
    { 130, "é" },
    { 131, "â" },
    { 132, "ä" },
    { 133, "à" },
    { 134, "å" },
    { 135, "ç" },
    { 136, "ê" },
    { 137, "ë" },
    { 138, "è" },
    { 139, "ï" },
    { 140, "î" },
    { 141, "ì" },
    { 142, "Ä" },
    { 143, "Å" },
    { 144, "É" },
    { 145, "æ" },
    { 146, "Æ" },
    { 147, "ô" },
    { 148, "ö" },
    { 149, "ò" },
    { 150, "ü" },
    { 151, "ù" },
    { 152, "ÿ" },
    { 153, "Ö" },
    { 154, "Ü" },
    { 155, "ø" },
    { 156, "£" },
    { 157, "Ø" },
    { 158, "×" },
    { 159, "ƒ" },
    { 160, "á" },
    { 161, "í" },
    { 162, "ó" },
    { 163, "ú" },
    { 164, "ñ" },
    { 165, "Ñ" },
    { 166, "ª" },
    { 167, "º" },
    { 168, "¿" },
    { 169, "®" },
    { 170, "¬" },
    { 171, "½" },
    { 172, "¼" },
    { 173, "¡" },
    { 174, "«" },
    { 175, "»" },
    { 176, "░" },
    { 177, "▒" },
    { 178, "▓" },
    { 179, "│" },
    { 180, "┤" },
    { 181, "Á" },
    { 182, "Ä" },
    { 183, "À" },
    { 184, "©" },
    { 185, "╣" },
    { 186, "║" },
    { 187, "╗" },
    { 188, "╝" },
    { 189, "¢" },
    { 190, "¥" },
    { 191, "┐" },
    { 192, "└" },
    { 193, "┴" },
    { 194, "┬" },
    { 195, "├" },
    { 196, "─" },
    { 197, "┼" },
    { 198, "ã" },
    { 199, "Ã" },
    { 200, "╚" },
    { 201, "╔" },
    { 202, "╩" },
    { 203, "╦" },
    { 204, "╠" },
    { 205, "═" },
    { 206, "╬" },
    { 207, "¤" },
    { 207, "€" },
    { 208, "ð" },
    { 209, "Ð" },
    { 210, "Ê" },
    { 211, "Ë" },
    { 212, "È" },
    { 213, "ı" },
    { 214, "Í" },
    { 215, "Î" },
    { 216, "Ï" },
    { 217, "┘" },
    { 218, "┌" },
    { 219, "█" },
    { 220, "▄" },
    { 221, "╎" },
    { 222, "Ì" },
    { 223, "▀" },
    { 224, "Ó" },
    { 225, "ß" },
    { 226, "Ô" },
    { 227, "Ò" },
    { 228, "õ" },
    { 229, "Õ" },
    { 230, "μ" },
    { 231, "þ" },
    { 232, "Þ" },
    { 233, "Ú" },
    { 234, "Û" },
    { 235, "Ù" },
    { 236, "ý" },
    { 237, "Ý" },
    { 238, "‾" },
    { 239, "´" },
    { 240, "‐" },
    { 241, "±" },
    { 242, "‗" },
    { 243, "¾" },
    { 244, "¶" },
    { 245, "§" },
    { 246, "÷" },
    { 247, "¸" },
    { 248, "°" },
    { 249, "¨" },
    { 250, "·" },
    { 251, "¹" },
    { 252, "³" },
    { 253, "²" },
    { 254, "▪" },
    { 257, "☺" },
    { 258, "☻" },
    { 259, "♥" },
    { 260, "♦" },
    { 261, "♣" },
    { 262, "♠" },
    { 263, "•" },
    { 264, "◘" },
    { 265, "○" },
    { 266, "◙" },
    { 267, "♂" },
    { 268, "♀" },
    { 269, "♪" },
    { 270, "♫" },
    { 271, "☼" },
    { 272, "►" },
    { 273, "◄" },
    { 274, "↕" },
    { 275, "‼" },
    { 276, "¶" },
    { 277, "§" },
    { 278, "▬" },
    { 279, "↨" },
    { 280, "↑" },
    { 281, "↓" },
    { 282, "→" },
    { 283, "←" },
    { 284, "∟" },
    { 285, "↔" },
    { 286, "▲" },
    { 287, "▼" },
    { 288, "¨" },
    { 289, "˜" },
    { 290, "˚" },
    { 291, "ˆ" },
    { 292, "ˋ" },
    { 293, "´" },
    { 294, "ˮ" },
    { 295, "‛" },
    { 296, "…" },
    { 297, "–" },
    { 298, "—" },
    { 302, "⟨" },
    { 303, "⟩" },
    { 304, "¨" },
    { 305, "˜" },
    { 306, "˚" },
    { 307, "ˆ" },
    { 308, "ˋ" },
    { 309, "ˊ" },
    { 310, "„" },
    { 311, "‚" },
    { 312, "”" },
    { 313, "‗" },
    { 320, "Œ" },
    { 321, "œ" },
    { 322, "Ÿ" },
    { 326, "╞" },
    { 327, "╟" },
    { 328, "▌" },
    { 329, "▐" },
    { 336, "╧" },
    { 337, "╤" },
    { 338, "╥" },
    { 339, "╙" },
    { 340, "╘" },
    { 341, "╒" },
    { 342, "╓" },
    { 343, "╫" },
    { 344, "╪" },
    { 345, "╡" },
    { 346, "╢" },
    { 347, "╖" },
    { 348, "╕" },
    { 349, "╜" },
    { 350, "╛" },
    { 351, "╧" },
    { 352, "ĳ" },
    { 353, "Ĳ" },
    { 354, "ﬁ" },
    { 355, "ﬂ" },
    { 356, "ŉ" },
    { 368, "†" },
    { 369, "‡" },
    { 374, "™" },
    { 375, "ℓ" },
    { 381, "⌐" },
    { 382, "₺" },
    { 383, "₧" },
    { 0 },
};

#endif
