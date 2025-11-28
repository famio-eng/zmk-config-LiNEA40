// ===============================
//  JIS向けキー入力定義 (LiNEA40専用JP)
//  ※ Keymap Editor で 🚫 にならず設定できる前提で命名
// ===============================

#pragma once
#include <dt-bindings/zmk/keys.h>

// --- 記号キー（あなたの対応表に基づく） ---

#define JP_DQUOTE      &kp AT          // "
#define JP_AMP         &kp CARET       // &
#define JP_SQUOTE      &kp AMPERSAND   // '
#define JP_EQUAL       &kp UNDER       // =
#define JP_HAT         &kp EQUAL       // ^
#define JP_YEN         &kp 0x89        // ¥  (JIS特殊コード)
#define JP_COLON       &kp COLON       // :
#define JP_PLUS        &kp PLUS        // +
#define JP_TILDE       &kp LS(PLUS)    // ~
#define JP_PIPE        &kp LS(0x89)    // |
#define JP_AT          &kp LEFT_BRACKET // @
#define JP_LBRACE      &kp SINGLE_QUOTE // {
#define JP_RBRACE      &kp DOUBLE_QUOTES // }
#define JP_LBRACKET    &kp LEFT_BRACE   // [
#define JP_RBRACKET    &kp RIGHT_BRACKET // ]
#define JP_BSLASH      &kp BACKSLASH    // \
#define JP_ASTER       &kp ASTERISK     // *
#define JP_LPAREN      &kp LEFT_PARENTHESIS // (
#define JP_RPAREN      &kp RIGHT_PARENTHESIS // )

// --- IME／日本語入力系 ---
#define JP_KANA        &kp LANGUAGE_1       // かな
#define JP_EISU        &kp LANGUAGE_2       // 英数
#define JP_HANKAKU     &kp GRAVE            // 半角/全角
