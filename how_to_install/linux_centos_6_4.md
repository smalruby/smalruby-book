# Linux (CentOS 6.4) に Smalruby をインストールしよう

Linux (CentOS 6.4)を使っている場合はSmalrubyといっしょにいくつかのソフトウェアもインストールする必要があるんだ。

Linuxの使い方に詳しい人はインターネットで次のアドレスを表示して何をしているか確認して自分でSmalrubyをインストールしてみよう。

* https://gist.github.com/takaokouji/7508444
* https://gist.github.com/takaokouji/7509849

Linuxを使い始めたばかりという人はこれから説明するやり方にそって一緒にSmalrubyをインストールしよう。

なお、Linux (CentOS 6.4) そのもののインストールのやり方はここでは説明しないよ。
[CentOS 6.3のネットワークインストール手順](http://konishi.me/?p=134) などを参考にしてLinuxそのもののインストールはできているものとして説明しているよ。

## Ruby 2.0.0-p247のインストール

メニューから「端末」を起動します。

キーボードを操作して次の文字(これをコマンドといいます)を入力します。これはソフトウェアのインストールなどのコンピュータを管理できるrootというユーザになるコマンドだよ。

```
su -
```

コマンドを実行すると、次のように表示されるのでLinuxをインストールするときに設定したrootユーザのパスワードを入力して「Enter」キーを押します。入力したパスワードは画面には表示されないけど問題ないよ。もし入力を間違えたら「Ctrl」キーと「u」キーを同時に押すとやり直せるよ。

```
パスワード:
```

パスワードが正しければ次のように「root」や「#」が表示されます。

```
[root@<コンピュータの名前> ~]#
```

次のコマンドを実行してRuby 2.0.0-p247をインストールします。インストールする場所は/usr/local/bin/rubyだよ。もしすでにRubyをインストールしていた場合はそれが使えなくなっちゃうから気を付けてね。

```
curl https://gist.github.com/takaokouji/7508444/raw/0ff784864f7f41a933f469ced714235a221c9593/ruby.2.0.0-p247-setup.sh | bash
```

少し時間がかかるけど、次のように表示されたらRubyがインストールできているよ。

```
(省略)
RubyGems installed the following executables:
	/usr/local/bin/gem

Ruby Interactive (ri) documentation was installed. ri is kind of like man
pages for ruby libraries. You may access it like this:
  ri Classname
  ri Classname.class_method
  ri Classname#instance_method
If you do not wish to install this documentation in the future, use the
--no-document flag, or set it as the default in your ~/.gemrc file. See
'gem help env' for details.
```

このまま端末での操作を続けてSmalrubyをインストールしよう。

## Smalrubyのインストール

次のコマンドを実行してSmalrubyをインストールします。

```
curl https://gist.github.com/takaokouji/7509849/raw/db219d85a9271ff36ac698b2e1135deeaaab3392/smalruby-setup.sh | bash
```

ここでも少し時間がかかるけど、次のように表示されたらRubyがインストールできているよ。「<バージョン>」というところには「0.0.2」といった文字が入るよ。

```
(省略)
Nothing to do
Successfully installed smalruby-<バージョン>
1 gem installed
```

最後にコンピュータを再起動させよう（※1）。

※1: SELinuxが有効になっている場合は再起動しないとインストールしたソフトウェア(libSGE.so)が利用できません。

## Smalrubyの動作確認

コンピュータが再起動したらSmalrubyの動作を確認しよう。

メニューから「端末」を起動して次のコマンドを実行してサンプルプログラムをダウンロードします。

```
curl -O https://raw.github.com/smalruby/smalruby/master/samples/finding_cars.rb
```

次のように表示されたらfinding_cars.rbいう名前でサンプルプログラムがダウンロードできているよ。

```
  % Total    % Received % Xferd  Average Speed   Time    Time     Time  Current
                                 Dload  Upload   Total   Spent    Left  Speed
101  3038  101  3038    0     0  11339      0 --:--:-- --:--:-- --:--:-- 70651
```

次のコマンドでサンプルプログラムを実行しよう。画面の指示に従ってマウスをクリックして隠れている車を4台探してみてね。サンプルプログラムは「Esc」キーかウィンドウの×を押すと終了するよ。

```
ruby finding_cars.rb
```

これでSmalrubyをインストールできました。

https://github.com/smalruby/smalruby-book/wiki/_new
