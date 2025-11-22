#pragma once

// JIS補正キーコード定義
#define JP_DQUOTE       AT                // "
#define JP_AMPERSAND    CARET             // &
#define JP_QUOTE        AMPERSAND         // '
#define JP_EQUAL        UNDER             // =
#define JP_CARET        EQUAL             // ^
#define JP_YEN          0x89              // ¥
#define JP_PLUS         COLON             // +
#define JP_TILDE        PLUS              // ~
#define JP_PIPE         LS(0x89)          // |
#define JP_AT           LEFT_BRACKET      // @
#define JP_COLON        SINGLE_QUOTE      // :
#define JP_ASTERISK     DOUBLE_QUOTES     // *
#define JP_BACKQUOTE    LEFT_BRACE        // `
#define JP_UNDERSCORE   LS(0x87)          // _
#define JP_LBRACKET     RIGHT_BRACKET     // [
#define JP_RBRACKET     BACKSLASH         // ]
#define JP_LPAREN       ASTERISK          // (
#define JP_RPAREN       LEFT_PARENTHESIS  // )
#define JP_LBRACE       RIGHT_BRACE       // {
#define JP_RBRACE       PIPE              // }
#define JP_KANA         LANGUAGE_1        // かな
#define JP_EISU         LANGUAGE_2        // 英数
#define JP_HANZEN       GRAVE             // 半角/全角
