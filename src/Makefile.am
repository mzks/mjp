SUBDIRS = lib #サブソースディレクトリ

bin_PROGRAMS = mjp #実行ファイル名

# 静的ライブラリのリンク
mjp_LDFLAGS = -L./lib 
mjp_LDADD = -lmjpDate -lmjpWrite

mjp_CFLAGS =  -I ./lib 
mjp_DEPENDENCIES = ./lib/libmjpDate.a ./lib/libmjpWrite.a

mjp_SOURCES = mjp.cpp
