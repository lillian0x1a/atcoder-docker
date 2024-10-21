# Atcoderのdocker環境
## 環境構築
### Docker コンテナの立ち上げ
```sh
docker compose up -d
```
### VSCode へのアタッチ
`ctrl + shift + P`でコマンドパレットを開いて，`Dev Containers: Open Folder in Container...`を実行
### VSCode の拡張機能 Task Runner
`Task Runner`を使うと`.vscode/tasks.json`に登録されたタスクをGUIで実行できる
## 初期設定
### acc, oj のログイン
acc, oj で AtCoder のユーザー名とパスワードを入力してログインする
```sh
# ダウンロードの確認
acc check-oj
# accのログイン
acc login
# ojのログイン
oj login https://beta.atcoder.jp
```
### acc の設定の変更
デフォルトで全部の問題がダウンロードされるようにしておく
```sh
acc config default-task-choice all
```
## 問題のダウンロード
`vscode`のタスク`abc_dl`,`arc_dl`を実行すると,`abc`,`arc`問題のダウンロードができる
* abc 問題のダウンロード -> src/atcoder/abc/にダウンロードされる
* arc 問題のダウンロード -> src/atcoder/arc/にダウンロードされる
## テストの実行
解答用のcppファイルを開いて，vscodeのタスク`test`を実行すると，例題でのテストが開始される
##解答の提出
解答用のcppファイルを開いて，vscodeのタスク`submit`を実行すると，自動で提出できる
