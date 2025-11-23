#pragma once

// JIS補正キーコード定義 (ZMKの慣習に沿って &kp を追加)
#define JP_DQUOTE      &kp AT           // " (USの@の位置)
#define JP_AMPERSAND   &kp CARET        // & (USの^の位置)
#define JP_QUOTE       &kp AMPERSAND    // ' (USの&の位置)
#define JP_EQUAL       &kp UNDERSCORE   // = (USの_の位置)
#define JP_CARET       &kp EQUAL        // ^ (USの=の位置)
#define JP_PLUS        &kp COLON        // + (USの:の位置)
#define JP_TILDE       &kp PLUS         // ~ (USの+の位置)
#define JP_AT          &kp LEFT_BRACKET // @ (USの[の位置)
#define JP_COLON       &kp SINGLE_QUOTE // : (USの'の位置)
#define JP_ASTERISK    &kp DQT          // * (USの"の位置)
#define JP_BACKQUOTE   &kp LEFT_BRACE   // ` (USの{の位置)
#define JP_LBRACKET    &kp RIGHT_BRACKET// [ (USの]の位置)
#define JP_RBRACKET    &kp BACKSLASH    // ] (USの\の位置)
#define JP_LPAREN      &kp ASTERISK     // ( (USの*の位置)
#define JP_RPAREN      &kp LPAR         // ) (USの(の位置)
#define JP_LBRACE      &kp RIGHT_BRACE  // { (USの}の位置)
#define JP_RBRACE      &kp PIPE         // } (USの|の位置)

// 日本語固有キー（JISレイアウトのキーコード）
#define JP_YEN         &kp NON_US_HASH   // ¥ (JIS固有のキー)
#define JP_PIPE        &kp LS(NON_US_HASH) // | (Shift + ¥)
#define JP_UNDERSCORE  &kp LSHFT(RO)     // _ (Shift + RO/JISのろ)
#define JP_KANA        &kp LANG_1        // かな
#define JP_EISU        &kp LANG_2        // 英数
#define JP_HANZEN      &kp GRAVE         // 半角/全角

// 0x89 や 0x87 のような RAW HID コードを使用する代わりに、
// ZMKで定義されたキー名 (NON_US_HASH, RO, LANG_1, LANG_2) を使用することを推奨します。
