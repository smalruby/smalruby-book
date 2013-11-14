= Smalrubyのインストール

//lead{
まずはSmalrubyをコンピュータに入れて使えるようにしよう。このことを「Smalrubyをインストールする」ともいうんだ。少し時間がかかったり、難しい言葉が画面にでてくるのでおうちの人と一緒にやってみよう。
//}

きみが持っているコンピュータにはオペレーティングシステム@<fn>{os}っていうソフトウェアが入っていて、その種類によってやり方が違うんだ。ここでは次の4つについて説明するよ。

 * Microsoft Windows 8.1
 * Mac OS X Mountain Lion
 * Mac OS X Mavericks
 * GNU/Linux (Ubuntu)

//footnote[os][http://ja.wikipedia.org/wiki/オペレーティングシステム]

それじゃあ、それぞれのオペレーティングシステムのやり方を説明するので、きみの使っているものを選んでSmalrubyをインストールしよう。

===[column] どのオペレーティングシステムを使っているの？

きみが使っているのはどのオペレーティングシステムかな？次の画面をヒントに調べてみよう。もし分からなかったらおうちの人に聞いてみよう。

//image[windows81][Microsoft Windows 8.1の画面]{
Microsoft Windows 8.1のスクリーンショット
//}

//image[macosx108][Mac OS X Mountain Lionの画面]{
Mac OS X Mountain Lionのスクリーンショット
//}

//image[macosx109][Mac OS X Mavericksの画面]{
Mac OS X Mavericksのスクリーンショット
//}

//image[linuxubuntu][GNU/Linux (Ubuntu)の画面]{
GNU/Linux (Ubuntu)のスクリーンショット
//}

== Microsoft Windows 8.1の場合

Microsoft Windows 8.1を使っている場合はSmalrubyといっしょに次のソフトウェアもインストールする必要があるんだ。

 * Ruby@<fn>{ruby}とDevKit@<fn>{devkit}
 * Smalruby

それでは上から順番にインストールしてみよう。

//footnote[ruby][http://ja.wikipedia.org/wiki/Ruby]
//footnote[devkit][Rubyに関連したソフトウェアをインストールするときに使うソフトウェアです。英語ではあるけど http://rubyinstaller.org/add-ons/devkit/ に説明があるよ。]

=== STEP1: RubyとDevKit

まずはインターネットからRubyと、DevKitという2つのソフトウェアを取ってきます。インターネットなどからソフトウェアなどを取ってくることを@<kw>{ダウンロード}というんだ。よく使う言葉だから覚えておこう。

インターネットを開いて「http://rubyinstaller.org」にアクセスします。たくさんの英語が表示されているけど落ち着いて一緒にやっていこう。

//image[search_rubyinstaller_org][検索に「rubyinstaller.org」と入力することで「http://rubyinstaller.org」にアクセスすることもできるよ]

表示された画面の「Download」ボタンを押します。

//image[rubyinstaller_org][RubyInstaller for Windowsのウェブサイト]

表示された画面の左側に「Ruby 2.0.0-p247」と表示されているのが見つけられるかな。見つかったらそれを押してね。そのすぐ下に「Ruby 2.0.0-p247 (x64)」というのもあるけど、これじゃないから間違えないでね。

//image[ruby_download_link][Ruby 2.0.0-p247を押す]

画面の下側に「dl.bintray.comからrubyinstaller-2.0.0-p247.exe(16.0MB)を実行または保存しますか？」と表示されているよね。その横の「保存(S)」ボタンを押してね。

//image[downloading_ruby][保存(S)ボタンを押す]

少し待っていると「rubyinstaller-2.0.0-p247.exeのダウンロードが完了しました。」と表示されるはず。これでRubyをダウンロードできたよ。それじゃあその横の「実行(R)」ボタンを押して、Rubyをインストールしよう。

//image[downloaded_ruby][実行(R)ボタンを押す]

ここからは画面の表示に従ってRubyをインストールするよ。

//image[install_ruby_01][「OK」ボタンを押す]
//image[install_ruby_02][「同意する(A)」を押してから「次へ(N) >」ボタンを押す]
//image[install_ruby_03][「Tcl/Tkサポートをインストールする」「Rubyの実行ファイルへ環境変数PATHを設定する」「.rbと.rbwファイルをRubyに関連づける」を押してから「インストール(I)」ボタンを押す]
//image[install_ruby_04][「完了(F)」ボタンを押す]

これでRubyのインストールは完了だよ。

続けてDevKitもダウンロード・インストールしよう。

さっきRubyをダウンロードしたインターネットの画面を少し下にずらすと「DEVELOPMENT KIT」と表示されているのがわかるかな。そこからもう少し下のほうに「DevKit-mingw64-32-4.7.2-20130224-1151-sfx.exe」という赤い文字が見つけられるかな。目印としてその文字の上に「For use with Ruby 2.0 (32bits version only):」と書かれているよ。見つけられたらそれを押してね。

さっきと同じように画面の下に「保存」ボタンが表示されるから、そのボタンを押してね。

//image[downloading_devkit][DevKit-mingw64-32-4.7.2-20130224-1151-sfx.exeを押して、保存(S)ボタンを押す]

しばらくすると、これもさっきと同じように「実行(R)」ボタンが表示されるから、そのボタンを押してDevKitをインストールしよう。

//image[downloaded_devkit][実行(R)ボタンを押す]

以下の画面のようにキーボードを操作して「C:\devkit」と入力して「extract」ボタンを押します。しばらくして画面が消えたらOKだよ。でもDevKitのインストールはこれだけでは終わりじゃなくて、もう少しやることがあるんだ。

//image[install_devkit_01][「C:\devkit」と入力して「extract」ボタンを押す]

スタート画面から「コマンド プロンプト」というアプリを探して起動します。「コマンド プロンプト」は「Windows システムツール」の近くにあるよ。

//image[search_cmd][検索に「コマンド」と入力することで「コマンド プロンプト」を起動することもできるよ]

キーボードを操作して以下を順番に入力するんだけど注意することがいくつかあるんだ。

//cmd{
cd \devkit
ruby dk.rb init
ruby dk.rb install
//}

1つは、「cd」と「\devkit」のように少し間が空いているところはスペースキーを打って必ず間を空けること。

もう1つは、「cd \devkit」まで入力したらEnterキーを打つこと。

それじゃあ、順番に入力していこう。

//image[install_devkit_02][DevKitのインストール]

これでDevKitもインストールできた。コマンド プロンプトは立ち上げたままで次のステップに進んでね。

=== STEP2: Smalruby

続けてSmalrubyをインストールするよ。

コマンド プロンプトで以下のコマンドを実行します。

//cmd{
>gem install smalruby
//}

//image[install_smalruby_01][Smalrubyのインストール]

しばらくすると、「C:\devkit>」と表示されます。またその上には「8 gems installed」と表示されているはず。これでSmalrubyをインストールできた。RubyやDevKitに比べると簡単だったね。

//image[install_smalruby_02][Smalrubyのインストール完了！]

これでプログラムを作る準備ができたよ。

それじゃあ、次の章に進もう！！

== Mac OS X Mountain Lionの場合

Mac OS X Mountain Lionを使っている場合はSmalrubyといっしょに次のソフトウェアもインストールする必要があるんだ。

 * STEP1: Xcode
 * STEP2: Homebrew
 * STEP3: Ruby
 * STEP4: SDL
 * STEP5: Smalruby

それでは順番にインストールしてみよう。

=== STEP1: Xcode

はじめにインストールするのは@<kw>{Xcode}だ。
@<kw>{Xcode}はきみが使っているコンピュータを使ってプログラムを作るためには必ず必要になるソフトウェアなんだ。まずはこれをインストールしよう。

@<kw>{Xcode}をインストールするには@<kw>{Apple ID}というものが必要になるんだ。きみが使っているコンピュータは@<kw>{Apple}という会社が作っているんだけど、@<kw>{Apple}の商品を買ったりするときに使うパスポートのようなもので、さまざまな場面で使うことになるんだ。もし、@<kw>{Apple ID}が分からなければ、おうちの人に聞いてみよう。

@<kw>{Apple ID}の用意ができたら@<kw>{App Store}を起動しよう。画面の左上の「りんごマーク」をクリックすると@<img>{run_app_store}のようなものが表示されます。これを@<kw>{メニュー}といいます。

//image[run_app_store][「App Store...」メニュー]{
App Store...のメニュー
//}

メニューから「App Store...」をクリックします。すると@<img>{app_store}のような画面が表示されます。これが@<kw>{App Store}です。

//image[app_store][App Store]{
App Storeのトップ画面
//}

@<kw>{App Store}の画面の右上に虫眼鏡のマークがある。その横の部分をクリックしてキーボードで「Xcode」と入力します。すると、画面に@<kw>{Xcode}のアイコンと「インストール」というボタンが表示される。「インストール」ボタンを押すと、さきほど用意した@<kw>{Apple ID}とパスワードを入力するための画面が表示される。それぞれを入力して「サインイン」ボタンを押すとインストールが開始されます。

このときインターネットから大きなファイル（約1.5GB）のファイルをダウンロードするため時間がかかります。ときどき画面を見ながら気長に待ちましょう。

インストールできたら、Xcodeを起動します。
メニューの[Xcode]-[Preference…]を選択します。
DownloadsタブのComponentsタブを選択します。
Command Line ToolsのInstallボタンをクリックします。
インストールされるまでしばらく待ちます。

=== STEP2: Homebrew

ターミナルを起動します。

以下のコマンドを実行します。
//cmd{
$ /usr/bin/ruby -e "$(curl -fsSL https://raw.github.com/mxcl/homebrew/go)"
//}

以下の表示がでます。returnキーを押します。

//cmd{
==> This script will install:
/usr/local/bin/brew
/usr/local/Library/...
/usr/local/share/man/man1/brew.1
==> The following directories will be made group writable:
/usr/local/.

Press ENTER to continue or any other key to abort
//}

以下の表示がでます。コンピュータを使うときに入力するパスワードを入れてenterキーを押します。

//cmd{
==> /usr/bin/sudo /bin/chmod g+rwx /usr/local/.
Password:
//}

以下の表示が出たら完了です。

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

=== Ruby

Rubyをインストールします。

ターミナルを起動して以下のコマンドを実行する。

//cmd{
$ brew install rbenv ruby-build
//}

以下のように表示されてインストールが完了する。

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

以下のコマンドを順番に実行します。

//cmd{
$ echo 'eval "$(rbenv init -)"' >> ~/.bash_profile
$ echo 'export PATH="$HOME/.rbenv/shims:$PATH"' >> ~/.bash_profile
$ source ~/.bash_profile
//}

以下のコマンドを実行する。

//cmd{
$ rbenv install 1.9.3-p448
//}

以下のように表示されます。

//cmd{
Downloading ruby-1.9.3-p448.tar.gz...
-> http://dqw8nmjcqpjn7.cloudfront.net/a893cff26bcf351b8975ebf2a63b1023
Installing ruby-1.9.3-p448...
//}

しばらく待っていると以下のように表示されてインストールが完了します。

//cmd{
Installed ruby-1.9.3-p448 to /Users/matsue-city15/.rbenv/versions/1.9.3-p448

$
//}

インストールされていることを確認するには以下のコマンドを実行します。

//cmd{
$ rbenv versions
//}

以下のように表示されたら正しくインストールされています。

//cmd{
* system (set by /Users/matsue-city15/.rbenv/version)
  1.9.3-p448
//}

以下のコマンドを実行する。

//cmd{
$ rbenv global 1.9.3-p448
//}

以下のコマンドを実行して、表示された結果が一致していれば正しく設定できている。

//cmd{
$ ruby --version
ruby 1.9.3p448 (2013-06-27 revision 41675) [x86_64-darwin12.4.0]
//}

====[column] RVMをアンインストールする

ターミナルを起動する。

以下のコマンドを実行する。

//cmd{
$ rvm seppuku
//}

以下が表示されます。

//cmd{
Are you SURE you wish for rvm to implode?
This will recursively remove /usr/local/rvm and other rvm traces?
(anything other than 'yes' will cancel) >
//}

以下のようにキーボードでyesを入力してenterキーを押す。

//cmd{
(anything other than 'yes' will cancel) > yes
//}

以下のように表示されたらokです。

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

RailsInstallerでインストールされたファイルを削除する。

ターミナルを起動する。

以下のコマンドを実行する。

//cmd{
$ sudo rm /etc/profile.d/rvm.sh /etc/rvmrc
//}

以下のように表示されたら、ログインするときに入力するパスワードを入力してenterキーを押す。

//cmd{
Password:
//}

以下のように表示されたら削除できています。

//cmd{
$
//}

設定ファイルを修正します。以下のコマンドを実行してエディタを起動します。そして最下部にある「source /etc/profile.d/rvm.sh」の行を削除します。カーソルキーで上記の行に移動して、キーボードのdを2回押す。ここで画面下部に赤い文字で「W10: Warning: Changing a readonly file」と表示されるが問題ない。行が消えたら、キーボードの「:」「w」「q」「!」を順番に押してennterキーを押す。

//cmd{
$ sudo vi /etc/profile
//}

これでrvmのアンインストールができました。

アンインストールした結果を反映させるために、いったん、ターミナルを終了させます。

=== SDL

SDLをインストールします。

//cmd{
$ brew install sdl
==> Downloading http://www.libsdl.org/release/SDL-1.2.15.tar.gz
######################################################################## 100.0%
==> ./configure --prefix=/usr/local/Cellar/sdl/1.2.15 --without-x
(ここで少し待つ)
==> make install
🍺  /usr/local/Cellar/sdl/1.2.15: 223 files, 2.1M, built in 45 seconds
//}

以下のコマンドを実行する。

//cmd{
$ brew install sdl_image
==> Installing dependencies for sdl_image: jpeg, libpng, libtiff, webp
==> Installing sdl_image dependency: jpeg
==> Downloading https://downloads.sf.net/project/machomebrew/Bottles/jpeg-8d.mou
######################################################################## 100.0%
==> Pouring jpeg-8d.mountain_lion.bottle.tar.gz
(省略)
==> Installing sdl_image
==> Downloading http://www.libsdl.org/projects/SDL_image/release/SDL_image-1.2.1
######################################################################## 100.0%
==> ./configure --prefix=/usr/local/Cellar/sdl_image/1.2.12 --disable-sdltest
==> make install
🍺  /usr/local/Cellar/sdl_image/1.2.12: 8 files, 140K, built in 14 seconds
//}

以下のコマンドを実行する。

//cmd{
$ brew install sdl_mixer
==> Downloading http://www.libsdl.org/projects/SDL_mixer/release/SDL_mixer-1.2.1
######################################################################## 100.0%
==> ./configure --prefix=/usr/local/Cellar/sdl_mixer/1.2.12
==> make install
🍺  /usr/local/Cellar/sdl_mixer/1.2.12: 8 files, 424K, built in 16 seconds
//}

以下のコマンドを実行する。

//cmd{
$ brew install sdl_ttf
==> Installing sdl_ttf dependency: freetype
==> Downloading https://downloads.sf.net/project/machomebrew/Bottles/freetype-2.
######################################################################## 100.0%
==> Pouring freetype-2.5.0.1.mountain_lion.bottle.1.tar.gz
🍺  /usr/local/Cellar/freetype/2.5.0.1: 59 files, 2.6M
==> Installing sdl_ttf
==> Downloading http://www.libsdl.org/projects/SDL_ttf/release/SDL_ttf-2.0.11.ta
######################################################################## 100.0%
==> ./configure --prefix=/usr/local/Cellar/sdl_ttf/2.0.11 --disable-sdltest
==> make install
🍺  /usr/local/Cellar/sdl_ttf/2.0.11: 8 files, 100K, built in 12 seconds
//}

以下のコマンドを実行する。

//cmd{
$ brew install https://gist.github.com/mitmul/5410467/raw/c4fa716635e951b61f489726976b10f00dd41306/sge.rb

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

=== Smalruby

以下のコマンドを実行する。

//cmd{
$ cd ~
$ git clone https://github.com/smalruby/smalruby smalruby-lib
Cloning into 'smalruby-lib'...
remote: Counting objects: 249, done.
remote: Compressing objects: 100% (184/184), done.
remote: Total 249 (delta 115), reused 187 (delta 53)
Receiving objects: 100% (249/249), 82.76 KiB, done.
Resolving deltas: 100% (115/115), done.
//}

以下のコマンドを実行する。

//cmd{
$ cd smalruby-lib/
//}

以下のコマンドを実行する。

//cmd{
$ echo 'gem: --no-ri --no-rdoc' > ~/.gemrc
//}

以下のコマンドを実行する。

//cmd{
$ gem install bundler
Successfully installed bundler-1.3.5
1 gem installed
//}

以下のコマンドを実行する。

//cmd{
$ rbenv rehash
//}

以下のコマンドを実行する。

//cmd{
$ bundle
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

以下のコマンドを実行する。

//cmd{
$ rbenv rehash
//}

サンプルプログラムを起動する。画面をクリックすると○が表示され、escキーを押すと終了する。

//cmd{
$ bundle exec rsdl samples/finding_cars.rb
//}

以下のコマンドを実行する。

//cmd{
$ rake build
smalruby 0.0.1 built to pkg/smalruby-0.0.1.gem.
//}

以下のコマンドを実行する。

//cmd{
$ gem install pkg/smalruby-0.0.1.gem
Successfully installed smalruby-0.0.1
1 gem installed
//}

== Mac OS X Mavericksの場合

== GNU/Linux (Ubuntu)の場合
