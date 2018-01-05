= 理解度と調べ方のはなし

ひよこエンジニアのみなさんは自分より長く働いているエンジニアのひとに対し、「あ、ひよこエンジニアじゃないひと！なんでも知ってるんだろうな〜すごいな〜それに比べてじぶんは…」
みたいなことを思っているかもしれません。しかし！それは違うのです。全くのナンセンス！そんな風におもっちゃだめだ！無駄に自分を痛めつけるのはやめてくれ！やめろー！

なぜ違うと言い切れるのか？それは、全ての分野について100%詳しい人なんていないからです。
物知りに見えるひとは、理解度を高めるためのステップを踏んでジャンプしてきた人です。そして、この理解度ステップは@<b>{ジャンルごと}に踏んでいきます。
なので、@<b>{A（たとえばJavaとか）については詳しいけど、B（たとえばApacheログの解析手法とか）についてはチョットしかワカらない}なんてことが
めっちゃくちゃあります。むしろ、詳しい分野があるだけマシかもしれません。なので、みちゆく人がスーパーエンジニアだという幻想は一旦ゴミ箱に入れておきましょう。
ホイップ・ステップ・ジャーンプ！であなたも何かの分野について詳しくなることができるのですから。

== 理解度は進化する

ホイップ・ステップ・ジャーンプ！するために大事なことは、今自分がどこの理解度に立っているのか把握し
段階にあった情報源を使って情報収集することです。

ポケモンを1回もやったことがない人に、@<code>{金銀で1番楽にジム戦を回ることができる最初の御三家はどれでしょう？}とか言っても
「は？金銀ってなんやねん？ジム戦？御三家？」みたいになっちゃいますよね@<fn>{ch01-fn01}。
まずポケモンとは？を知り、基本的なゲームシステムがわからないと何をどうやって調べたら良いのかもわかりませんし、
ポケモンの相性や御三家やジムに出てくるポケモンのタイプがわからないと考えることすらできません。

//footnote[ch01-fn01][ヒノアラシ＞ワニノコ＞＞＞＞＞＞＞＞＞＞＞＞＞＞チコリータの順で楽になります。チコリータを選ぶと苦行の始まりです。でもかわいいから許す。]

そしてこれは、技術の世界も一緒だと思います。
@<code>{Webアプリ作りたいんだけど、Webサーバーには何を使おうか？OSはどうする？あ、どんな言語で開発しようか？フレームワーク使う？どうする？UIはどうする？}みたいなことを言われたときに
「は？Webサーバー？フレームワーク？0SってWindowsかMacしか知らんし」ってなるのか、
「Apacheならちょっとわかるなー、サーバーサイドはJava・Ruby・Node.jsとかあるけど自分はJavaScriptしか自信ないな…」ってなるのか、
「ApacheかNginxとかあるけど、そもそもサーバーは必要なのかな？AWS Lambdaとかにデプロイできるようなアプリなのかな？
ってかそもそも何用途なのかな？WebサイトならWordPress使えばいいんじゃないかな？」ってなるのかでだいぶ違いますよね。

#@#図解入れる/階段状にしてな

というわけで、ホイップ・ステップ・ジャーンプ！するためにも、理解度の段階についてまずは知ってみましょう。


=== タマゴ：さっぱりーりえ

@<code>{あるジャンルに入門したてほやほや、右も左もわからない（＝さっぱりーりえ）}という状態です。@<b>{タマゴちゃん}とでもしておきます。
こんな症状がみられるときは、タマゴちゃんであると言えるでしょう。

* その単語をみたときに、なんの話をしているのか皆目見当もつかない
* 「さあ、何か作ってみるぞ！」ってなったときに何から手をつけたらいいのかわからない
* 今向き合っている技術がどこの分野に属しているのかわからない（例：LinuxはOSだよね・Apacheはミドルウェアだね）
* とりあえずもうワケワカメなので、パソコンを閉じておふとんにこもりたい（絶望の闇）

タマゴちゃん、だめだめじゃん！って思いました？絶対そんなことはありません。ダメとかいうな！ダメっていうのがだめなんだぞ！

タマゴちゃんのいいところは@<b>{初心者がつまづくところを身にしみて感じることができる}ことです。
全然良くない？だからそれがいいんだって言ってるでしょ！話を最後まで聞いてよぉ！
つまづいて「はーこまっちゃったな」「さっぱりわからん」っていう気持ちがあると、もし別のタマゴちゃんに出会ったときに
相手の気持ちに寄り添った説明ができますよね。わからない・難しい気持ちがあるからこそ、優しさでタマゴをあっためることができる。これは世界平和ですぞ！

それに、「わからん」部分は他の人も「わからん」って思っています。タマゴな気持ちになったということは！それはブログ・技術同人誌などのネタになり得るということです。
どんな情報でもありがたみを感じる、われわれひよこエンジニアの生命線・命綱である情報源、あなたも増やしていこうじゃありませんか。そのためにはタマゴな気持ちをたくさん体感して
たくさんネタを仕込んでおくのがいいってことです。

どれだけタマゴになれるかで、このあとの理解度ステップを駆けあがれるかが変わってくるのだと思います。別にわからないことはなーんも恥ずかしいことじゃないのです。
タマゴばんざい！


=== うまれたて：チョットワカル

@<code>{詳しくはないけど少しだけこの分野について知っている}状態を@<b>{チョットワカル}と表現するネットスラングがあります。
まさにタマゴちゃんから生まれたてほやほやな状態にぴったりなので、タマゴちゃんの次のステップを@<b>{チョットワカル}とします@<fn>{ch01-fn02}。

//footnote[ch01-fn02][ワタシ ニホンゴ チョットワカル が元ネタらしい。諸説ある。]

では、どんな状態がチョットワカルひとなのでしょう？

* 今向き合っている技術の用途はなんとなくワカル
* 今向き合っている技術がどの分野に属しているのかワカル
* 基本的な操作・文法・設定方法がワカル
* でも応用になってくると、誰かの助けが必要

タマゴちゃんからチョットワカルにホイップ・ステップするのは難しくありません。出会った技術との楽しい（かもしれない）触れ合いを続けることで、
いつのまにかチョットワカルひとに進化できるからです。

でも、チョットワカルままで終わってしまうのか、次のステップにジャーンプ！できるのかはあなた次第です。
ちなみに世の中にはチョットワカル状態なのに、「どや！おれはすごいんだぜい！」なんて顔をしているひともいます。
ひよこエンジニアの人にはどちらも同じように見えてしまう可能性が高いので、厄介なところです。どうやって見分けたらいいのでしょうか？

=== 第一進化：夕日に向かって走り出すマン

* 今向き合っている技術と似ている機能を持った技術をあげることができる
* その技術と今使っている技術の違いを説明できる
* 今使っている技術のメリット・デメリットがわかる
* 用途に合わせて改修ができる
* 〇〇の場合はどうする？など、場面が変化したときどうすれば良いのか見当できる

チョットワカルひとからホイップ・ステップ・ジャーンプ！できたひとの特徴です。

チョットワカル状態から進化できたときが、自立したエンジニアといえるでしょう。
ここまでくれば、ある程度プログラムを書く・ミドルウェアやOSの設定をするなど、自力で技術を使っていけるはずです。
そんなあなたは自転車に乗って@<b>{夕日に向かって走り出しているマン}と言えるでしょう。はしっていけ！


=== 第二進化：目指せ神

夕日に向かって走り出した後に目指すべきは@<b>{神}しかありません。神の特徴としては

* （今向き合っている技術がOSSの場合）OSSコミッターだったりする
* 民に最新の技術の知見の啓司を与えることができる
* バグを見つけて報告したりできる
* むしろ新しい技術を作り出す、創造神
* カンファレンスに登壇して民に知見を還元する

ちなみにカンファレンスに出ている＝神という方程式は成り立たないので注意です@<fn>{ch01-fn03}。

//footnote[ch01-fn03][ニセモノの神は発表内容に中身がなかったり、ちょっと時代遅れだったりします。ちゃんと聞いてれば判断できることが多いのですが、判断に迷う場合Twitterやブログの感想、はてブのコメントを参照すると良いでしょう。]


どうでしょう？理解度の進化段階、なんとなくわかったでしょうか？あ、そうそう、ここで挙げた判断基準はただの基準であり、
〇〇できなきゃ次の段階にホイップ・ステップ・ジャンプできない！なんてことはありません。なので、
自分は神じゃないからカンファレンス登壇しちゃだめなんだ、とかチョットワカルのとこにいるけど、ドキュメント間違ってるからOSSコミッターしてみよ
って思ったらどしどし行動していくべきです。

高み目指してやっていき！ですぞ〜。

== 進化段階に合わせて調べ方を変更する

ここまで読んだあなたは「はよ調べ方とか身になる話を教えてくれや、なんでいきなり理解度の話がでてくるんや」とか思っているかもしれません。
でも、理解度の話はとても重要なのです。なんでか？それは@@<b>{自分の理解度に合わせて適切な情報リソースを使わないと、挫折する率が高い}からです。
ポケモン御三家の話でも少し出てきましたね。

というわけで、まずはこの本を読んでいるあなたともふちゃんで@@<b>{理解度の定義を共有する}必要がありました。
このように、技術の世界では言葉の定義や前提条件のイメージをきちんと合わせておくのが大事になってきます。
専門用語の乱れ打ちになりがちな技術の世界ならではの特徴ですね。

#@#なんか挿絵しようかな

ってことで、理解度に合わせた調べ方をみていきましょう。

=== タマゴちゃんなあなたは

@<code>{あるジャンルに入門したてほやほや、右も左もわからない（＝さっぱりーりえ）}なタマゴちゃん。
新しい概念や単語に出会って右往左往している可能性が高いです。ではどうするか？

1. Googleの検索窓を開く
2. @@<code>{調べたい単語}@@<code>{半角、または全角スペース}@@<code>{とは}と打ち込む
3. @@<code>{Enter}キーを押して検索する
4. 検索結果の一覧を2ページ分全部読む（画像みてね！）
5. よく見た単語をメモする
6. 今度は@@<code>{とは}を抜いて検索する
7. 気がすむまで繰り返し

#@# 4は補足入れる

タマゴちゃんなあなたに必要なのは、@@<b>{とにかく情報をあつめること}です。
古いとか新しいとかは一旦考えるのをやめましょう。とにかく今向き合っている技術について知ることが先決です。
チョットワカル段階にジャンプするための情報を集め、タマゴから生まれましょう。

==== 記事を読んでいくときは

Googleの検索結果に出てきた記事を読むときに、上から下まできちんと読んでいたら体も心も持ちません。
とにかく情報を集めるのが目的なので、次の情報が得られた/無さそうと判断したら別の記事を読んでいきましょう。

* その技術はどのジャンルに即しているのか？
* よく見る単語はあるか？
* 初心者向けの本、どんなものがあるか？そもそもあるのか？

よく見る単語を気にした方が良い理由は、頻出単語はその技術を知る上で知っておくべき概念であることが多いからです。
深く調べていこうと思った場合、頻出単語と技術名の組み合わせでGoogle検索をかけると詳しい記事を当てやすいので
「ほーん、こんなんあんねや」って感じでどこかにメモしておくと良いでしょう。


ちなみに、Webページを開いたときに@<b>{「うげぇ」と思ったら速攻でページを閉じ}ても大丈夫です。もっといい記事、世の中にあるよ。

==== 情報を仕入れたら

もしできれば、自分なりにわかったことをスケッチしてみると良いでしょう。テスト勉強時のまとめノートが近いですね。
スケッチをすると、自分の理解度を整理することができます。知識の穴がどこにあるのか埋めるための指標にもなります。
わからないところは@@<code>{？}マークをつけるなどして印をつけておきましょう。

#@#実例をこの後入れる

=== チョットワカルあなたは

=== 夕日に向かって走り出した〜神なあなたは
