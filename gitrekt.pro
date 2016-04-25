#-------------------------------------------------
#
# Project created by QtCreator 2016-04-10T17:06:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gitrekt
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    wrapper.cpp

HEADERS  += mainwindow.h \
    wrapper.h \
    global.h \
    git2.h \
    annotated_commit.h \
    attr.h \
    blame.h \
    blob.h \
    branch.h \
    buffer.h \
    checkout.h \
    cherrypick.h \
    clone.h \
    commit.h \
    common.h \
    config.h \
    cred_helpers.h \
    describe.h \
    diff.h \
    errors.h \
    filter.h \
    graph.h \
    ignore.h \
    index.h \
    indexer.h \
    inttypes.h \
    merge.h \
    message.h \
    net.h \
    notes.h \
    object.h \
    odb.h \
    odb_backend.h \
    oid.h \
    oidarray.h \
    pack.h \
    patch.h \
    pathspec.h \
    push.h \
    rebase.h \
    refdb.h \
    reflog.h \
    refs.h \
    refspec.h \
    remote.h \
    repository.h \
    reset.h \
    revert.h \
    revparse.h \
    revwalk.h \
    signature.h \
    stash.h \
    status.h \
    stdint.h \
    strarray.h \
    submodule.h \
    tag.h \
    trace.h \
    transaction.h \
    transport.h \
    tree.h \
    types.h

FORMS    += mainwindow.ui
