/*
 * 日本語配列 (JIS) 変換定義
 * WindowsがJIS設定のまま、USキーボードとして認識されたZMKから
 * 正しい記号を入力するための変換テーブル
 */

#include <dt-bindings/zmk/keys.h>

// ---------------------------------------------------------
// 基本定義 (ZMK標準コードへのマッピング)
// ---------------------------------------------------------
#define JP_ZHTG GRAVE          // 半角/全角
#define JP_YEN INT3           // ¥
#define JP_PIPE LS(INT3)       // |

#define JP_AT LBKT             // @
#define JP_QUOT LS(N2)         // "
#define JP_AMPS LS(N6)         // &
#define JP_SQT LS(N7)          // '
#define JP_LPAR LS(N8)         // (
#define JP_RPAR LS(N9)         // )
#define JP_EQL LS(MINUS)       // =
#define JP_PLUS LS(SEMI)       // +
#define JP_ASTR LS(SQT)        // *
#define JP_LBRC RBKT           // [
#define JP_RBRC NUHS           // ]
#define JP_LCBR LS(RBKT)       // {
#define JP_RCBR LS(NUHS)       // }
#define JP_COLN SQT            // :
#define JP_TILD LS(EQUAL)      // ~
#define JP_UNDER LS(INT1)      // _ (ろ)

// ---------------------------------------------------------
// 互換性レイヤー (あなたの古い設定ファイルが動くようにするための別名定義)
// これがあることで、keymapファイルを書き換えずにエラーを解消します
// ---------------------------------------------------------

// 以前の定義名への対応
#define JP_DQUOTE JP_QUOT
#define JP_AMPERSAND JP_AMPS
#define JP_QUOTE JP_SQT
#define JP_EQUAL JP_EQL
#define JP_CARET EQUAL          // ^ (US: =)
#define JP_TILDE JP_TILD
#define JP_COLON JP_COLN
#define JP_ASTERISK JP_ASTR
#define JP_BACKQUOTE LEFT_BRACE // ` (US: { ) ※古い定義に合わせました
#define JP_UNDERSCORE JP_UNDER

#define JP_LEFT_BRACKET JP_LBRC
#define JP_RIGHT_BRACKET JP_RBRC

#define JP_LPAREN JP_LPAR
#define JP_RPAREN JP_RPAR
#define JP_LBRACE JP_LCBR
#define JP_RBRACE JP_RCBR

// 日本語入力切り替え関連
#define JP_KANA LANGUAGE_1      // かな
#define JP_EISU LANGUAGE_2      // 英数
#define JP_HANZEN JP_ZHTG       // 半角/全角

// Keymap Editor等で使いやすい短縮名
#define JP_AT_SYM JP_AT
