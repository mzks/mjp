SUBDIRS = lib #サブソースディレクトリ

bin_PROGRAMS = mjp #実行ファイル名

# 静的ライブラリのリンク
mjp_LDFLAGS = -L./lib 
mjp_LDADD = -lmjpDate -lmjpWrite -lmjpRead

mjp_CXXFLAGS =  -I ./lib -std=c++11
mjp_DEPENDENCIES = ./lib/libmjpDate.a ./lib/libmjpWrite.a ./lib/libmjpRead.a

mjp_SOURCES = mjp.cpp
