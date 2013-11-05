# -*- coding: utf-8 -*-
STYLESHEET_PATH = "stylesheet/stylesheet.css"
CONFIG_PATH = "config.yml"

#--------------------
desc "HTML形式で出力"
task :html => :"clean:html" do
  mkdir_p("output_html")

  sh("review-compile --all --target=html --level=3 --stylesheet=#{STYLESHEET_PATH}")
  sh("mv *.html output_html/")
  require "rbconfig"
  if /mswin|cygwin|mingw/ =~ RbConfig::CONFIG["arch"]
    sh("cp -r images output_html/images")
    sh("cp -r stylesheet output_html/stylesheet")
  else
    sh("ln -sf ../images output_html/images")
    sh("ln -sf ../stylesheet output_html/stylesheet")
  end
end

#--------------------
desc "epub形式で出力"
task :epub => :"clean:epub" do
  cp(STYLESHEET_PATH, "stylesheet.css")
  sh("review-epubmaker #{CONFIG_PATH}")
  rm_rf("stylesheet.css")
end

#--------------------
desc "PDF形式で出力"
task :pdf => :"clean:pdf" do
  sh("review-pdfmaker #{CONFIG_PATH}")
end

#--------------------
desc "ページ数表示"
task :volume do
  sh("review-vol -P")
end

#--------------------
desc "ReVIEW表記の検証"
task :validate do
  files = Dir.glob('*.re')
  files.each do |file|
    puts "---- #{file}"
    system("review-validate #{file}")
    puts ""
  end
end

#--------------------
namespace :clean do
  require "yaml"

  desc "生成した全てのファイルを削除"
  task :all => [:html, :epub, :pdf] do; end

  desc "生成した HTML ファイルを削除"
  task :html do
    rm_rf("output_html")
  end

  desc "生成した epub ファイルを削除"
  task :epub do
    config = YAML.load(File.read(CONFIG_PATH))
    rm_rf("#{config["bookname"]}.epub")
  end

  desc "生成した pdf ファイルを削除"
  task :pdf do
    config = YAML.load(File.read(CONFIG_PATH))
    rm_rf("#{config["bookname"]}.pdf")
  end
end

task :default => [:html]
task :clean   => [:"clean:all"]
