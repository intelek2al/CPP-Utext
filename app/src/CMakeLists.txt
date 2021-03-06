cmake_minimum_required(VERSION 3.17)

#project(utext VERSION 1.0 LANGUAGES CXX)

set(SOURCES mainwindow.cpp
        codeeditor.cpp
        app.cpp
        tabmenager.cpp
        file_manager.cpp
        tabwelcome.cpp
        loggingcategories.cpp
        search.cpp
        syntaxhighlightercxx.cpp
        syntaxstyle.cpp
        stylesyntaxhighlighter.cpp
        language.cpp
        dialogsettings.cpp
        settings.cpp
        )

set(HEADERS mainwindow.h
        linenumberarea.h
        codeeditor.h
        app.h
        test_runner.h
        tabmenager.h
        file_manager.h
        tabwelcome.h
        loggingcategories.h
        search.h
        syntaxhighlightercxx.h
        syntaxstyle.h
        stylesyntaxhighlighter.cpp
        language.h
        highlightrule.h
        dialogsettings.h
        settings.h
        )

set(UI mainwindow.ui dialogsettings.ui)

add_library(src ${SOURCES} ${HEADERS} ${UI})

target_link_libraries(src PRIVATE Qt${QT_VERSION_MAJOR}::Core
        Qt${QT_VERSION_MAJOR}::Widgets
        Qt${QT_VERSION_MAJOR}::Gui
        Qt${QT_VERSION_MAJOR}::Multimedia
)
