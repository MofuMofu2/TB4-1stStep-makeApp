= はじめに

りまりま団のもふもふです。4月ですね。新しく技術の世界に飛び込んだみなさんもいるのではないでしょうか。
もふちゃんも、4年前は卵から生まれたてのひよこエンジニアとして社会人をスタートさせました。
もちろんIT未経験（大学は心理学専攻だったのだ。統計とPhotoshopとエクセル関数はできた）、
パソコンのOSはWindowsとMacしか知らない状態でのぴかぴか社会人生活です。

新人研修なるものでプログラミングなど諸々の講義はありましたが…。正直なーんも役に立たなかったね！なんでか？

 * まず何をいってるのかさっぱりーりえ（フォルダを切ってーと言われたけど、フォルダとは？切るってなんやねん？って感じ）
 * 実装内容を提示されても、どうやって作るのかさっぱりイメージできない
 * クライアントとサーバーの関係とか、そもそもWebアプリケーションの仕組みがわからん（説明の時点でWebサーバから情報を取得とか言われては？ってなる）
 * 「わかんないことがあったら調べてね」って言われても調べ方がわからん
 * 「わかんないことがあったら聞いてね」って言われたから聞いたのに、なんか知らんけど「ちゃんと調べて」って怒られる
 * Googleに関連しそうな単語を入力して出てきた記事を見ても、また何言ってるのかさっぱりーりえ

文字にすると改めてひどいですね。よく辞めなかったな？最終的に、講義の時間＝おねんねの時間になりました。
2年目くらいまでsqlなんか書けなかったね！いまだにJavaなどオブジェクト指向言語に対する苦手意識は半端ないです@<fn>{intro-fn01}。

//footnote[intro-fn01][配属先はインフラの仕事を希望してプログラミングから逃げたマン]

そのあと紆余曲折ありまして、今では技術同人誌を書いたらその本が技術書典シリーズとして出版されてびびったり、
懲りずに技術同人誌書いたりなんかしております@<fn>{intro-fn02}。
//footnote[intro-fn02][あ、そうそう、結局プログラミングとかサーバー周りの知識はほぼ独学状態でお勉強する羽目になりました。かなしー！]

で、この本はせっかく技術の世界に入ったのに、もふちゃんみたいにうわー！もうだめだー！全然わからん！みたいになる人を減らすべく
初めて技術の世界に触れ合うひよこエンジニアの人が知っておくと良い知識をまとめた本です。
もふちゃんもまだひよこエンジニア（特にプログラミング系の知識はみんなと同じくらいか下）なので、不安な気持ちとか超わかりみあります。
でも、大丈夫です。ちゃんとお勉強すれば自分に返ってくるのがIT業界のいいところです。自信持ってやっていきましょうー。

== おことわり

この本は駆け出しのひよこエンジニアの人に向けて書いている本です。専門用語の説明をわざと簡略化したりしている部分もありますが
「これも説明しなあかんねん！」みたいなことを言うのは勘弁してください。初心者はな、あれこれ言われてもさっぱり分からんのです。

最後の方でWebアプリを作ってみる章があります。もふもふちゃんもこの分野は駆け出しのひよこエンジニアなので、
色々足りていないところがあるかもしれません。「なんでこのライブラリ使わないんや」とか言わないでいただけると嬉しいです。
これが初心者の限界かーくらいに思ってもらえると嬉しいです。（もっと勉強します）

出てくる技術要素に関しまして、動作確認はしています。ただしあなたの環境で正しく動くか保証はできません。
この本の内容を使って不都合なことが発生しても責任をとることはできないので、必ずご自身の環境で正しく動作するか
よく確認・検証を行ってください。

あ、あと、全体的にもふちゃんの趣味全開でやってます。これぞ同人誌の醍醐味じゃない？みんなもプリキュア観てくれよな！
ポケモンもいいしゲームもいいね！はーもう東京駅行きたいわー。
