= Smalrubyのインストール

//lead{
まずはSmalrubyをコンピュータに入れて使えるようにしよう。このことを「Smalrubyを@<kw>{インストール}する」ともいうんだ。少し時間がかかったり、難しい言葉が画面にでてくるのでおうちの人と一緒にやってみよう。
//}

きみが持っているコンピュータには@<kw>{オペレーティングシステム(Operating System)}@<fn>{os}っていうソフトウェアが入っていて、その種類によってSmalrubyをインストールするやり方が違うんだ。オペレーティングシステムは頭文字をとって@<kw>{OS(オーエス)}と呼ばれることが多い。この本でもそう呼ぶことにするよ。

ここでは次の2つの種類のOSについて説明するよ。

 * Microsoft Windows 8.1
 * Mac OS X Mountain Lion

//footnote[os][http://ja.wikipedia.org/wiki/オペレーティングシステム]

それじゃあ、それぞれのOSでSmalrubyをインストールするやり方を説明するので、きみの使っているものを選んで一緒にSmalrubyをインストールしよう！

===[column] どのオペレーティングシステムを使っているの？

きみが使っているのはどのオペレーティングシステムかな？次の画面をヒントに調べてみよう。もし分からなかったらおうちの人に聞いてみよう。

//image[windows81][Microsoft Windows 8.1の画面]{
Microsoft Windows 8.1のスクリーンショット
//}

//image[macosx108][Mac OS X Mountain Lionの画面]{
Mac OS X Mountain Lionのスクリーンショット
//}

== Microsoft Windows 8.1の場合

Microsoft Windows 8.1を使っている場合はSmalrubyといっしょに次のソフトウェアもインストールする必要があるんだ。

 * Ruby@<fn>{ruby}
 * DevKit@<fn>{devkit}
 * Smalruby

それでは上から順番にインストールしてみよう。

//footnote[ruby][http://ja.wikipedia.org/wiki/Ruby]
//footnote[devkit][Rubyに関連したソフトウェアをインストールするときに使うソフトウェアです。英語ではあるけど http://rubyinstaller.org/add-ons/devkit/ に説明があるよ。]

=== Rubyのインストール

まずはインターネットから@<kw>{Ruby}というソフトウェアを取ってきてインストールしよう。インターネットからソフトウェアなどのデータを取ってくることを@<kw>{ダウンロード}というんだ。これはよく使う言葉だから覚えておこう。

[ステップ1] インターネットで「http://rubyinstaller.org」にアクセスします。

@<b>{これまでインターネットをしたことがないという人はおうちの人にやり方を教えてもらおう}。たくさんの英語が表示されているけど落ち着いて一緒にやっていこう。

表示された画面の「Download」ボタンを押します。

//image[rubyinstaller_org][「Download」ボタンを押す]

[ステップ2] 表示された画面の左側に「Ruby 2.0.0-p247」と表示されているのが見つけられるかな。見つかったらそれを押してね。

そのすぐ下に「Ruby 2.0.0-p247 (x64)」というのもあるけど、これじゃないから間違えないでね。

画面の下側に「dl.bintray.comからrubyinstaller-2.0.0-p247.exe(16.0MB)を実行または保存しますか？」と表示されているよね。その横の「保存(S)」ボタンを押してね。

//image[downloading_ruby][Ruby 2.0.0-p247を押して保存(S)ボタンを押す]

[ステップ3] 少し待っていると「rubyinstaller-2.0.0-p247.exeのダウンロードが完了しました。」と表示されるはず。これでRubyをダウンロードできたよ。それじゃあその横の「実行(R)」ボタンを押してRubyのインストールをはじめよう。

//image[downloaded_ruby][実行(R)ボタンを押す]

[ステップ4] ここからは画面の表示に従ってRubyをインストールするよ。

//image[install_ruby_01][「OK」ボタンを押す]

//image[install_ruby_02][「同意する(A)」を押してから「次へ(N) >」ボタンを押す]

//image[install_ruby_03][「Tcl/Tkサポートをインストールする」「Rubyの実行ファイルへ環境変数PATHを設定する」「.rbと.rbwファイルをRubyに関連づける」を押してから「インストール(I)」ボタンを押す]

//image[install_ruby_04][「完了(F)」ボタンを押す]

これでRubyのインストールは完了だよ。

=== DevKitのインストール

続けてDevKitもダウンロード・インストールしよう。

[ステップ1] さっきRubyをダウンロードした画面を少し下にずらすと「DEVELOPMENT KIT」と表示されているのがわかるかな。そこからもう少し下のほうに「DevKit-mingw64-32-4.7.2-20130224-1151-sfx.exe」という赤い文字が見つけられるかな。目印としてその文字の上に「For use with Ruby 2.0 (32bits version only):」と書かれているよ。見つけられたらそれを押してね。

さっきと同じように画面の下に「保存」ボタンが表示されるから、そのボタンを押してね。

//image[downloading_devkit][DevKit-mingw64-32-4.7.2-20130224-1151-sfx.exeを押して、保存(S)ボタンを押す]

[ステップ2] しばらくすると、これもさっきと同じように「実行(R)」ボタンが表示されるから、そのボタンを押してDevKitをインストールしよう。

//image[downloaded_devkit][実行(R)ボタンを押す]

[ステップ3] 次の画面のようにキーボードを操作して「C:\devkit」と入力して「extract」ボタンを押します。しばらくして画面が消えたらOKだよ。

//image[install_devkit_01][「C:\devkit」と入力して「extract」ボタンを押す]

でもDevKitのインストールはこれだけでは終わりじゃなくて、もう少しやることがあるんだ。

[ステップ3] スタート画面から「コマンド プロンプト」というアプリを探して起動します。「コマンド プロンプト」は「Windows システムツール」の近くにあるよ。

//image[cmd][コマンド プロンプト]

[ステップ4] コマンド プロンプトが起動したら、キーボードを操作して次の文字を順番に入力するんだけど注意することがいくつかあるんだ。

//cmd{
cd ¥devkit
ruby dk.rb init
ruby dk.rb install
//}

最初の注意点は、「cd」と「¥devkit」のように少し間が空いているところはスペースキーを押して必ず間を空けること。

もうひとつの注意点は、「cd ¥devkit」のように1行入力したらEnterキーを押すこと。実は入力してもらった文字はコンピュータを操作するための命令なんだ。この命令のことを@<kw>{コマンド}ともいうんだよ。それで、Enterキーを押すことでコンピュータが入力したコマンドを実行してくれるんだ。だからEnterキーを必ず押してね。

それじゃあ、順番に入力していこう。

//image[install_devkit_02][DevKitのインストール]

これでDevKitもインストールできた。コマンド プロンプトは立ち上げたままで次のSmalrubyのインストールに進んでね。

=== Smalrubyのインストール

続けてSmalrubyをインストールするよ。

[ステップ1] コマンド プロンプトで次のコマンドを実行します。

//cmd{
gem install smalruby
//}

//image[install_smalruby_01][Smalrubyのインストール]

[ステップ2] しばらくすると、「C:\devkit>」と表示されます。またその上には「8 gems installed」と表示されているはず。

//image[install_smalruby_02][Smalrubyのインストール完了！]

これでSmalrubyをインストールできた。RubyやDevKitのインストールに比べると簡単だったね。

これでプログラムを作る準備ができたよ。それじゃあ、次の章に進もう！！

== Mac OS X Mountain Lionの場合

Mac OS X Mountain Lionを使っている場合はSmalrubyといっしょに次のソフトウェアもインストールする必要があるんだ。

 * Xcode
 * Homebrew
 * Ruby
 * SDL
 * Smalruby

それでは順番にインストールしてみよう。

=== Xcodeのインストール

はじめにインストールするのは@<kw>{Xcode}だ。
@<kw>{Xcode}はきみが使っているコンピュータを使ってプログラムを作るためには必ず必要になるソフトウェアなんだ。まずはこれをインストールしよう。

@<kw>{Xcode}をインストールするには@<kw>{Apple ID}というものが必要になるんだ。きみが使っているコンピュータは@<kw>{Apple}という会社が作っているんだけど、@<kw>{Apple}の商品を買ったりするときに使うパスポートのようなもので、さまざまな場面で使うことになるんだ。もし、@<kw>{Apple ID}が分からなければ、おうちの人に聞いてみよう。

@<kw>{Apple ID}の用意ができたら@<kw>{App Store}を起動しよう。画面の左上の「りんごマーク」をクリックすると@<img>{run_app_store}のようなものが表示されます。これを@<kw>{メニュー}といいます。

//image[run_app_store][「App Store...」メニュー]{
App Store...のメニュー
//}

メニューから「App Store...」をクリックします。すると@<img>{app_store}のような画面が表示されます。これが@<kw>{App Store}です。

@<kw>{App Store}の画面の右上に虫眼鏡のマークがある。その横の部分をクリックしてキーボードで「Xcode」と入力します。すると、画面に@<kw>{Xcode}のアイコンと「インストール」というボタンが表示される。「インストール」ボタンを押すと、さきほど用意した@<kw>{Apple ID}とパスワードを入力するための画面が表示される。それぞれを入力して「サインイン」ボタンを押すとインストールが開始されます。

//image[app_store][App Store]{
App Storeのトップ画面
//}

このときインターネットから大きなファイル（約1.5GB）のファイルをダウンロードするため時間がかかります。ときどき画面を見ながら気長に待ちましょう。

インストールできたらXcodeを起動します。

メニューから[Xcode]-[Preferences…]を選択します。

DownloadsタブのComponentsタブを選択します。

Command Line ToolsのInstallボタンをクリックします。

インストールされるまでしばらく待ちます。

=== Homebrewのインストール

ターミナルを起動します。

以下のコマンドを実行します。
//cmd{
/usr/bin/ruby -e "$(curl -fsSL https://raw.github.com/mxcl/homebrew/go)"
//}

次のように表示されますのでreturnキーを押します。

//cmd{
==> This script will install:
/usr/local/bin/brew
/usr/local/Library/...
/usr/local/share/man/man1/brew.1
==> The following directories will be made group writable:
/usr/local/.

Press ENTER to continue or any other key to abort
//}

次のように表示されますのでコンピュータを使うときに入力するパスワードを入れてreturnキーを押します。ここで注意してほしいのは、入力したパスワードは秘密を守るために画面には表示されない。もし打ち間違えた場合はcontrolキーとuキーを同時に押すとやり直すことができる。

//cmd{
==> /usr/bin/sudo /bin/chmod g+rwx /usr/local/.
Password:
//}

次のように「Now type: brew help」と表示されたら完了です。

//cmd{
==> Downloading and installing Homebrew...
remote: Finding bitmap roots...
remote: Counting objects: 136502, done.
remote: Compressing objects: 100% (45289/45289), done.
remote: Total 136502 (delta 94462), reused 132027 (delta 90171)
Receiving objects: 100% (136502/136502), 25.04 MiB | 906 KiB/s, done.
Resolving deltas: 100% (94462/94462), done.
From https://github.com/mxcl/homebrew
 * [new branch]      master     -> origin/master
HEAD is now at eb32df9 mess 0.151
==> Installation successful!
You should run `brew doctor' *before* you install anything.
Now type: brew help
//}

=== Rubyのインストール

続いてRubyをインストールします。

ターミナルを起動して以下のコマンドを実行する。

//cmd{
brew install rbenv ruby-build
//}

次のように表示されてインストールが完了する。

//cmd{
==> Downloading https://github.com/sstephenson/rbenv/archive/v0.4.0.tar.gz
######################################################################## 100.0%
==> Caveats
To use Homebrew's directories rather than ~/.rbenv add to your profile:
  export RBENV_ROOT=/usr/local/var/rbenv

To enable shims and autocompletion add to your profile:
  if which rbenv > /dev/null; then eval "$(rbenv init -)"; fi
(省略)
==> make install
🍺  /usr/local/Cellar/libyaml/0.1.4: 7 files, 340K, built in 13 seconds
==> Installing ruby-build
==> Downloading https://github.com/sstephenson/ruby-build/archive/v20131030.tar.
######################################################################## 100.0%
==> ./install.sh
🍺  /usr/local/Cellar/ruby-build/20131030: 89 files, 396K, built in 4 seconds
//}

次のコマンドを順番に実行します。

//cmd{
echo 'export PATH="$HOME/.rbenv/shims:$PATH"' >> ~/.bash_profile
echo 'eval "$(rbenv init -)"' >> ~/.bash_profile
source ~/.bash_profile
rbenv install 2.0.0-p247
//}

次のように表示されます。

//cmd{
Downloading openssl-1.0.1e.tar.gz...
-> http://dqw8nmjcqpjn7.cloudfront.net/66bf6f10f060d561929de96f9dfe5b8c
Installing openssl-1.0.1e...
//}

しばらく待っていると次のように表示されてインストールが完了します。

//cmd{
Installed openssl-1.0.1e to /Users/matsue-city15/.rbenv/versions/2.0.0-p247

Downloading ruby-2.0.0-p247.tar.gz...
-> http://dqw8nmjcqpjn7.cloudfront.net/c351450a0bed670e0f5ca07da3458a5b
Installing ruby-2.0.0-p247...
Installed ruby-2.0.0-p247 to /Users/matsue-city15/.rbenv/versions/2.0.0-p247

$
//}

インストールされていることを確認するには次のコマンドを実行します。

//cmd{
rbenv versions
//}

次のように表示されたら正しくインストールされています。

//cmd{
* system (set by /Users/<名前>/.rbenv/version)
  2.0.0-p247
//}

次のコマンドを順番に実行します。

//cmd{
rbenv global 2.0.0-p247
ruby --version
//}

次のように表示されれば正しく設定できています。

//cmd{
ruby 2.0.0p247 (2013-06-27 revision 41674) [x86_64-darwin12.4.0]
//}

====[column] RVMをアンインストールする

本書ではrbenvを使うことを前提にしています。すでにRVMをインストールしている人で、もしRVMをアンインストールしても問題ないようでしたら、ここで説明するやり方でRVMをアンインストールしましょう。

ターミナルを起動します。

次のコマンドを実行します。

//cmd{
rvm seppuku
//}

次のように表示されます。

//cmd{
Are you SURE you wish for rvm to implode?
This will recursively remove /usr/local/rvm and other rvm traces?
(anything other than 'yes' will cancel) >
//}

次のようにキーボードで「yes」と入力してenterキーを押します。

//cmd{
(anything other than 'yes' will cancel) > yes
//}

次のように表示されたらOKです。

//cmd{
Removing rvm-shipped binaries (rvm-prompt, rvm, rvm-sudo rvm-shell and rvm-auto-ruby)
Removing rvm wrappers in /usr/local/rvm/bin
Hai! Removing /usr/local/rvm
rm: /etc/profile.d/rvm.sh: Permission denied
/usr/local/rvm has been removed.

Note you may need to manually remove /etc/rvmrc and ~/.rvmrc if they exist still.
Please check all .bashrc .bash_profile .profile and .zshrc for RVM source lines and delete or comment out if this was a Per-User installation.
Also make sure to remove `rvm` group if this was a system installation.
Finally it might help to relogin / restart if you want to have fresh environment (like for installing RVM again).
//}

もしRailsInstallerでRVMをインストールしていた場合は関連するファイルや設定も削除する。

ターミナルを起動します。

次ののコマンドを実行します。

//cmd{
sudo rm /etc/profile.d/rvm.sh /etc/rvmrc
//}

次のように表示されたら、ログインするときに入力するパスワードを入力してenterキーを押します。

//cmd{
Password:
//}

設定ファイルを修正します。以下のコマンドを実行してエディタを起動します。

//cmd{
sudo vi /etc/profile
//}

そして最下部にある「source /etc/profile.d/rvm.sh」の行を削除します。カーソルキーで上記の行に移動して、キーボードのdを2回押します。このとき画面下部に赤い文字で「W10: Warning: Changing a readonly file」と表示されますが問題ありません。行が消えたらキーボードの「:」「w」「q」「!」を順番に押してennterキーを押します。

これでrvmをアンインストールできました。

アンインストールした結果を反映させるために、いったん、ターミナルを終了させます。

=== SDLのインストール

SDLをインストールします。

//cmd{
brew install sdl sdl_image sdl_mixer sdl_ttf https://gist.github.com/mitmul/5410467/raw/c4fa716635e951b61f489726976b10f00dd41306/sge.rb
//}

しばらくして、以下のように表示されたらSDLのインストールが完了です。

//cmd{
(省略)
==> Cloning git://github.com/flibitijibibo/libSGE.git
Cloning into '/Library/Caches/Homebrew/sge--git'...
remote: Counting objects: 78, done.
remote: Compressing objects: 100% (73/73), done.
remote: Total 78 (delta 5), reused 73 (delta 5)
Receiving objects: 100% (78/78), 267.15 KiB | 156 KiB/s, done.
Resolving deltas: 100% (5/5), done.
==> export HAVE_SDL='y'
==> make
==> make install
🍺  /usr/local/Cellar/sge/r030809: 4 files, 44K, built in 4 seconds
//}

=== Smalrubyのインストール

次のコマンドを実行します。

//cmd{
git clone https://github.com/smalruby/smalruby smalruby-lib
//}

次のように表示されます。

//cmd{
Cloning into 'smalruby-lib'...
remote: Counting objects: 249, done.
remote: Compressing objects: 100% (184/184), done.
remote: Total 249 (delta 115), reused 187 (delta 53)
Receiving objects: 100% (249/249), 82.76 KiB, done.
Resolving deltas: 100% (115/115), done.
//}

次のコマンドを順番に実行します。

//cmd{
cd smalruby-lib/
echo 'gem: --no-ri --no-rdoc' > ~/.gemrc
gem install bundler
//}

次のように表示されます。

//cmd{
Successfully installed bundler-1.3.5
1 gem installed
//}

次のコマンドを実行します。

//cmd{
rbenv rehash
//}

次のコマンドを実行します。

//cmd{
bundle
//}

しばらくすると次のように表示されます。

//cmd{
Fetching gem metadata from https://rubygems.org/.........
Fetching gem metadata from https://rubygems.org/..
Resolving dependencies...
Installing rake (10.1.0)
Installing i18n (0.6.5)
Installing minitest (4.7.5)
Installing multi_json (1.8.2)
Installing atomic (1.1.14)
Installing thread_safe (0.1.3)
Installing tzinfo (0.3.38)
Installing activesupport (4.0.1)
Installing ast (1.1.0)
Using bundler (1.3.5)
(省略)
Installing rubocop (0.15.0)
Installing guard-rubocop (1.0.0)
Installing hashr (0.0.22)
Installing redcarpet (3.0.0)
Using smalruby (0.0.1) from source at /Users/matsue-city15/smalruby-lib
Installing travis-lint (1.7.0)
Installing yard (0.8.7.3)
Your bundle is complete!
Use `bundle show [gemname]` to see where a bundled gem is installed.
//}

次のコマンドを実行します。

//cmd{
rbenv rehash
rake build
//}

次のように表示されます。

//cmd{
smalruby 0.0.1 built to pkg/smalruby-0.0.1.gem.
//}

次のコマンドを実行します。

//cmd{
gem install -l pkg/smalruby-0.0.1.gem
//}

次のように表示されます。

//cmd{
Successfully installed smalruby-0.0.1
1 gem installed
//}

Samlrubyがインストールできたことを確認するために、サンプルプログラムを起動します。

//cmd{
rsdl samples/finding_cars.rb
//}

画面をクリックすると○が表示され、escキーを押すと終了します。

これでプログラムを作る準備ができたよ。それじゃあ、次の章に進もう！！
