<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01//EN">
<!-- saved from url=(0045)https://codeforces.com/contest/1367/problem/C -->
<html lang="en"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
    
    <meta name="X-Csrf-Token" content="0470df275c4e2aa32a4952cf51b1f26b">
    <meta id="viewport" name="viewport" content="width=device-width, initial-scale=0.01">

    <script src="./social _distance_files/sdk.js" async="" crossorigin="anonymous"></script><script type="text/javascript" async="" src="./social _distance_files/ga.js"></script><script id="facebook-jssdk" src="./social _distance_files/sdk(1).js"></script><script type="text/javascript" src="./social _distance_files/jquery-1.8.3.js"></script>
    <script type="application/javascript">
        window.standaloneContest = false;
        function adjustViewport() {
            var screenWidthPx = Math.min($(window).width(), window.screen.width);
            var siteWidthPx = 1100; // min width of site
            var ratio = Math.min(screenWidthPx / siteWidthPx, 1.0);
            var viewport = "width=device-width, initial-scale=" + ratio;
            $('#viewport').attr('content', viewport);
            var style = $('<style>html * { max-height: 1000000px; }</style>');
            $('html > head').append(style);
        }

        if ( /Android|webOS|iPhone|iPad|iPod|BlackBerry/i.test(navigator.userAgent) ) {
            adjustViewport();
        }
    </script>
    <meta http-equiv="pragma" content="no-cache">
    <meta http-equiv="expires" content="-1">
    <meta http-equiv="profileName" content="g2">
    <meta name="google-site-verification" content="OTd2dN5x4nS4OPknPI9JFg36fKxjqY0i1PSfFPv_J90">
    <meta property="fb:admins" content="100001352546622">
    <meta property="og:image" content="//sta.codeforces.com/s/13917/images/codeforces-telegram-square.png">
    <link rel="image_src" href="https://sta.codeforces.com/s/13917/images/codeforces-telegram-square.png">
    <meta property="og:title" content="Problem - C - Codeforces">
    <meta property="og:description" content="">
    
    <meta property="og:site_name" content="Codeforces">
    <meta name="uc" content="a895ee3992fc2f2739a8d0e2cb50ca28f35ba8bf">
    <meta name="usmc" content="690b7d12a722c95a51bd0bdcdb66b6a1cade4f34">
    
    <meta name="cc" content="276d6731ae4b00e505a2d0d3188b8fec4b541352">
    <meta name="pc" content="cefcaeacd6f91c035fe989d368d45c3bbbe5198d">
    
    <meta name="utc_offset" content="+03:00">
    <meta name="verify-reformal" content="f56f99fd7e087fb6ccb48ef2">
    <title>Problem - C - Codeforces</title>
        <meta name="description" content="Codeforces. Programming competitions and contests, programming community">
        <meta name="keywords" content="programming algorithm contest competition informatics olympiads c++ java graphs vkcup">
    <meta name="robots" content="index, follow">

    <link rel="stylesheet" href="./social _distance_files/font-awesome.min.css" type="text/css" charset="utf-8">

        <link href="./social _distance_files/css" rel="stylesheet" type="text/css">
        <link href="./social _distance_files/css(1)" rel="stylesheet" type="text/css">


    <link rel="apple-touch-icon" sizes="57x57" href="https://sta.codeforces.com/s/13917/apple-icon-57x57.png">
    <link rel="apple-touch-icon" sizes="60x60" href="https://sta.codeforces.com/s/13917/apple-icon-60x60.png">
    <link rel="apple-touch-icon" sizes="72x72" href="https://sta.codeforces.com/s/13917/apple-icon-72x72.png">
    <link rel="apple-touch-icon" sizes="76x76" href="https://sta.codeforces.com/s/13917/apple-icon-76x76.png">
    <link rel="apple-touch-icon" sizes="114x114" href="https://sta.codeforces.com/s/13917/apple-icon-114x114.png">
    <link rel="apple-touch-icon" sizes="120x120" href="https://sta.codeforces.com/s/13917/apple-icon-120x120.png">
    <link rel="apple-touch-icon" sizes="144x144" href="https://sta.codeforces.com/s/13917/apple-icon-144x144.png">
    <link rel="apple-touch-icon" sizes="152x152" href="https://sta.codeforces.com/s/13917/apple-icon-152x152.png">
    <link rel="apple-touch-icon" sizes="180x180" href="https://sta.codeforces.com/s/13917/apple-icon-180x180.png">
    <link rel="icon" type="image/png" sizes="192x192" href="https://sta.codeforces.com/s/13917/android-icon-192x192.png">
    <link rel="icon" type="image/png" sizes="32x32" href="https://sta.codeforces.com/s/13917/favicon-32x32.png">
    <link rel="icon" type="image/png" sizes="96x96" href="https://sta.codeforces.com/s/13917/favicon-96x96.png">
    <link rel="icon" type="image/png" sizes="16x16" href="https://sta.codeforces.com/s/13917/favicon-16x16.png">
    <link rel="manifest" href="https://sta.codeforces.com/s/13917/manifest.json">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="msapplication-TileImage" content="//sta.codeforces.com/s/13917/ms-icon-144x144.png">
    <meta name="theme-color" content="#ffffff">

    <!--CombineResourcesFilter-->
    <link rel="stylesheet" href="./social _distance_files/prettify.css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/clear.css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/style.css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/ttypography.css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/problem-statement.css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/second-level-menu.css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/roundbox.css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/datatable.css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/table-form.css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/topic.css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/jquery.jgrowl.css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/facebox.css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/jquery.wysiwyg.css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/jquery.autocomplete.css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/codeforces.datepick.css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/colorbox.css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/jquery.drafts.css" type="text/css" charset="utf-8">
        <link rel="stylesheet" href="./social _distance_files/community.css" type="text/css" charset="utf-8">
        <link rel="stylesheet" href="./social _distance_files/status.css" type="text/css" charset="utf-8">
        <link rel="stylesheet" href="./social _distance_files/sidebar-menu.css" type="text/css" charset="utf-8">

    <!-- MathJax -->
    <script type="text/x-mathjax-config;executed=true">
    MathJax.Hub.Config({
      tex2jax: {inlineMath: [['$$$','$$$']], displayMath: [['$$$$$$','$$$$$$']]}
    });
    </script>
    <script type="text/javascript" async="" src="./social _distance_files/MathJax.js">
    </script>
    <!-- /MathJax -->

    <script type="text/javascript" src="./social _distance_files/prettify.js"></script>
    <script type="text/javascript" src="./social _distance_files/moment-with-locales.min.js"></script>
    <script type="text/javascript" src="./social _distance_files/pushstream.js"></script>
    <script type="text/javascript" src="./social _distance_files/jquery.easing.min.js"></script>
    <script type="text/javascript" src="./social _distance_files/jquery.lavalamp.min.js"></script>
    <script type="text/javascript" src="./social _distance_files/jquery.jgrowl.js"></script>
    <script type="text/javascript" src="./social _distance_files/jquery.swipe.js"></script>
    <script type="text/javascript" src="./social _distance_files/jquery.hotkeys.js"></script>
    <script type="text/javascript" src="./social _distance_files/facebox.js"></script>
    <script type="text/javascript" src="./social _distance_files/jquery.wysiwyg.js"></script>
    <script type="text/javascript" src="./social _distance_files/wysiwyg.colorpicker.js"></script>
    <script type="text/javascript" src="./social _distance_files/wysiwyg.table.js"></script>
    <script type="text/javascript" src="./social _distance_files/wysiwyg.image.js"></script>
    <script type="text/javascript" src="./social _distance_files/wysiwyg.link.js"></script>
    <script type="text/javascript" src="./social _distance_files/jquery.autocomplete.js"></script>
    <script type="text/javascript" src="./social _distance_files/ua-parser.js"></script>
    <script type="text/javascript" src="./social _distance_files/jquery.datepick.js"></script>
    <script type="text/javascript" src="./social _distance_files/jquery.ie6blocker.js"></script>
    <script type="text/javascript" src="./social _distance_files/jquery.colorbox-min.js"></script>
    <script type="text/javascript" src="./social _distance_files/jquery.ba-bbq.js"></script>
    <script type="text/javascript" src="./social _distance_files/jquery.drafts.js"></script>
    <script type="text/javascript" src="./social _distance_files/clipboard.min.js"></script>
    <script type="text/javascript" src="./social _distance_files/autosize.min.js"></script>
    <script type="text/javascript" src="./social _distance_files/sjcl.js"></script>
    <script type="text/javascript" src="./social _distance_files/codeforces-options.js"></script>
    <script type="text/javascript" src="./social _distance_files/codeforces.js"></script>
    <script type="text/javascript" src="./social _distance_files/EventCatcher.js"></script>
    <script type="text/javascript" src="./social _distance_files/preparedVerdictFormats-en.js"></script>
    <!--/CombineResourcesFilter-->

    <link rel="stylesheet" href="./social _distance_files/style(1).css" type="text/css" charset="utf-8">
    <link rel="stylesheet" href="./social _distance_files/style(2).css" type="text/css" charset="utf-8">


    <script type="text/javascript" src="./social _distance_files/jquery.markitup.js"></script>
    <script type="text/javascript" src="./social _distance_files/set.js"></script>

    <!--[if IE]>
    <style>
        #sidebar {
            padding-left: 1em;
            margin: 1em 1em 1em 0;
        }
    </style>
    <![endif]-->


        <script id="nocomb.ace-builds/ace.js" src="./social _distance_files/ace.js" type="text/javascript"></script><style id="ace_editor.css">.ace_editor {position: relative;overflow: hidden;font: 12px/normal 'Monaco', 'Menlo', 'Ubuntu Mono', 'Consolas', 'source-code-pro', monospace;direction: ltr;}.ace_scroller {position: absolute;overflow: hidden;top: 0;bottom: 0;background-color: inherit;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;cursor: text;}.ace_content {position: absolute;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;min-width: 100%;}.ace_dragging .ace_scroller:before{position: absolute;top: 0;left: 0;right: 0;bottom: 0;content: '';background: rgba(250, 250, 250, 0.01);z-index: 1000;}.ace_dragging.ace_dark .ace_scroller:before{background: rgba(0, 0, 0, 0.01);}.ace_selecting, .ace_selecting * {cursor: text !important;}.ace_gutter {position: absolute;overflow : hidden;width: auto;top: 0;bottom: 0;left: 0;cursor: default;z-index: 4;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;}.ace_gutter-active-line {position: absolute;left: 0;right: 0;}.ace_scroller.ace_scroll-left {box-shadow: 17px 0 16px -16px rgba(0, 0, 0, 0.4) inset;}.ace_gutter-cell {padding-left: 19px;padding-right: 6px;background-repeat: no-repeat;}.ace_gutter-cell.ace_error {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAABOFBMVEX/////////QRswFAb/Ui4wFAYwFAYwFAaWGAfDRymzOSH/PxswFAb/SiUwFAYwFAbUPRvjQiDllog5HhHdRybsTi3/Tyv9Tir+Syj/UC3////XurebMBIwFAb/RSHbPx/gUzfdwL3kzMivKBAwFAbbvbnhPx66NhowFAYwFAaZJg8wFAaxKBDZurf/RB6mMxb/SCMwFAYwFAbxQB3+RB4wFAb/Qhy4Oh+4QifbNRcwFAYwFAYwFAb/QRzdNhgwFAYwFAbav7v/Uy7oaE68MBK5LxLewr/r2NXewLswFAaxJw4wFAbkPRy2PyYwFAaxKhLm1tMwFAazPiQwFAaUGAb/QBrfOx3bvrv/VC/maE4wFAbRPBq6MRO8Qynew8Dp2tjfwb0wFAbx6eju5+by6uns4uH9/f36+vr/GkHjAAAAYnRSTlMAGt+64rnWu/bo8eAA4InH3+DwoN7j4eLi4xP99Nfg4+b+/u9B/eDs1MD1mO7+4PHg2MXa347g7vDizMLN4eG+Pv7i5evs/v79yu7S3/DV7/498Yv24eH+4ufQ3Ozu/v7+y13sRqwAAADLSURBVHjaZc/XDsFgGIBhtDrshlitmk2IrbHFqL2pvXf/+78DPokj7+Fz9qpU/9UXJIlhmPaTaQ6QPaz0mm+5gwkgovcV6GZzd5JtCQwgsxoHOvJO15kleRLAnMgHFIESUEPmawB9ngmelTtipwwfASilxOLyiV5UVUyVAfbG0cCPHig+GBkzAENHS0AstVF6bacZIOzgLmxsHbt2OecNgJC83JERmePUYq8ARGkJx6XtFsdddBQgZE2nPR6CICZhawjA4Fb/chv+399kfR+MMMDGOQAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: 2px center;}.ace_gutter-cell.ace_warning {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAAAmVBMVEX///8AAAD///8AAAAAAABPSzb/5sAAAAB/blH/73z/ulkAAAAAAAD85pkAAAAAAAACAgP/vGz/rkDerGbGrV7/pkQICAf////e0IsAAAD/oED/qTvhrnUAAAD/yHD/njcAAADuv2r/nz//oTj/p064oGf/zHAAAAA9Nir/tFIAAAD/tlTiuWf/tkIAAACynXEAAAAAAAAtIRW7zBpBAAAAM3RSTlMAABR1m7RXO8Ln31Z36zT+neXe5OzooRDfn+TZ4p3h2hTf4t3k3ucyrN1K5+Xaks52Sfs9CXgrAAAAjklEQVR42o3PbQ+CIBQFYEwboPhSYgoYunIqqLn6/z8uYdH8Vmdnu9vz4WwXgN/xTPRD2+sgOcZjsge/whXZgUaYYvT8QnuJaUrjrHUQreGczuEafQCO/SJTufTbroWsPgsllVhq3wJEk2jUSzX3CUEDJC84707djRc5MTAQxoLgupWRwW6UB5fS++NV8AbOZgnsC7BpEAAAAABJRU5ErkJggg==");background-position: 2px center;}.ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAAAAAA6mKC9AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAAJ0Uk5TAAB2k804AAAAPklEQVQY02NgIB68QuO3tiLznjAwpKTgNyDbMegwisCHZUETUZV0ZqOquBpXj2rtnpSJT1AEnnRmL2OgGgAAIKkRQap2htgAAAAASUVORK5CYII=");background-position: 2px center;}.ace_dark .ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQBAMAAADt3eJSAAAAJFBMVEUAAAChoaGAgIAqKiq+vr6tra1ZWVmUlJSbm5s8PDxubm56enrdgzg3AAAAAXRSTlMAQObYZgAAAClJREFUeNpjYMAPdsMYHegyJZFQBlsUlMFVCWUYKkAZMxZAGdxlDMQBAG+TBP4B6RyJAAAAAElFTkSuQmCC");}.ace_scrollbar {position: absolute;right: 0;bottom: 0;z-index: 6;}.ace_scrollbar-inner {position: absolute;cursor: text;left: 0;top: 0;}.ace_scrollbar-v{overflow-x: hidden;overflow-y: scroll;top: 0;}.ace_scrollbar-h {overflow-x: scroll;overflow-y: hidden;left: 0;}.ace_print-margin {position: absolute;height: 100%;}.ace_text-input {position: absolute;z-index: 0;width: 0.5em;height: 1em;opacity: 0;background: transparent;-moz-appearance: none;appearance: none;border: none;resize: none;outline: none;overflow: hidden;font: inherit;padding: 0 1px;margin: 0 -1px;text-indent: -1em;-ms-user-select: text;-moz-user-select: text;-webkit-user-select: text;user-select: text;white-space: pre!important;}.ace_text-input.ace_composition {background: inherit;color: inherit;z-index: 1000;opacity: 1;text-indent: 0;}.ace_layer {z-index: 1;position: absolute;overflow: hidden;word-wrap: normal;white-space: pre;height: 100%;width: 100%;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;pointer-events: none;}.ace_gutter-layer {position: relative;width: auto;text-align: right;pointer-events: auto;}.ace_text-layer {font: inherit !important;}.ace_cjk {display: inline-block;text-align: center;}.ace_cursor-layer {z-index: 4;}.ace_cursor {z-index: 4;position: absolute;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;border-left: 2px solid;transform: translatez(0);}.ace_slim-cursors .ace_cursor {border-left-width: 1px;}.ace_overwrite-cursors .ace_cursor {border-left-width: 0;border-bottom: 1px solid;}.ace_hidden-cursors .ace_cursor {opacity: 0.2;}.ace_smooth-blinking .ace_cursor {-webkit-transition: opacity 0.18s;transition: opacity 0.18s;}.ace_editor.ace_multiselect .ace_cursor {border-left-width: 1px;}.ace_marker-layer .ace_step, .ace_marker-layer .ace_stack {position: absolute;z-index: 3;}.ace_marker-layer .ace_selection {position: absolute;z-index: 5;}.ace_marker-layer .ace_bracket {position: absolute;z-index: 6;}.ace_marker-layer .ace_active-line {position: absolute;z-index: 2;}.ace_marker-layer .ace_selected-word {position: absolute;z-index: 4;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;}.ace_line .ace_fold {-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;display: inline-block;height: 11px;margin-top: -2px;vertical-align: middle;background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACJJREFUeNpi+P//fxgTAwPDBxDxD078RSX+YeEyDFMCIMAAI3INmXiwf2YAAAAASUVORK5CYII=");background-repeat: no-repeat, repeat-x;background-position: center center, top left;color: transparent;border: 1px solid black;border-radius: 2px;cursor: pointer;pointer-events: auto;}.ace_dark .ace_fold {}.ace_fold:hover{background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACBJREFUeNpi+P//fz4TAwPDZxDxD5X4i5fLMEwJgAADAEPVDbjNw87ZAAAAAElFTkSuQmCC");}.ace_tooltip {background-color: #FFF;background-image: -webkit-linear-gradient(top, transparent, rgba(0, 0, 0, 0.1));background-image: linear-gradient(to bottom, transparent, rgba(0, 0, 0, 0.1));border: 1px solid gray;border-radius: 1px;box-shadow: 0 1px 2px rgba(0, 0, 0, 0.3);color: black;max-width: 100%;padding: 3px 4px;position: fixed;z-index: 999999;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;cursor: default;white-space: pre;word-wrap: break-word;line-height: normal;font-style: normal;font-weight: normal;letter-spacing: normal;pointer-events: none;}.ace_folding-enabled > .ace_gutter-cell {padding-right: 13px;}.ace_fold-widget {-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;margin: 0 -12px 0 1px;display: none;width: 11px;vertical-align: top;background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42mWKsQ0AMAzC8ixLlrzQjzmBiEjp0A6WwBCSPgKAXoLkqSot7nN3yMwR7pZ32NzpKkVoDBUxKAAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: center;border-radius: 3px;border: 1px solid transparent;cursor: pointer;}.ace_folding-enabled .ace_fold-widget {display: inline-block;   }.ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42m3HwQkAMAhD0YzsRchFKI7sAikeWkrxwScEB0nh5e7KTPWimZki4tYfVbX+MNl4pyZXejUO1QAAAABJRU5ErkJggg==");}.ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAGCAYAAAAG5SQMAAAAOUlEQVR42jXKwQkAMAgDwKwqKD4EwQ26sSOkVWjgIIHAzPiCgaqiqnJHZnKICBERHN194O5b9vbLuAVRL+l0YWnZAAAAAElFTkSuQmCCXA==");}.ace_fold-widget:hover {border: 1px solid rgba(0, 0, 0, 0.3);background-color: rgba(255, 255, 255, 0.2);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.7);}.ace_fold-widget:active {border: 1px solid rgba(0, 0, 0, 0.4);background-color: rgba(0, 0, 0, 0.05);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.8);}.ace_dark .ace_fold-widget {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAHklEQVQIW2P4//8/AzoGEQ7oGCaLLAhWiSwB146BAQCSTPYocqT0AAAAAElFTkSuQmCC");}.ace_dark .ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAH0lEQVQIW2P4//8/AxQ7wNjIAjDMgC4AxjCVKBirIAAF0kz2rlhxpAAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAFCAYAAACAcVaiAAAAHElEQVQIW2P4//+/AxAzgDADlOOAznHAKgPWAwARji8UIDTfQQAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget:hover {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);background-color: rgba(255, 255, 255, 0.1);}.ace_dark .ace_fold-widget:active {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);}.ace_fold-widget.ace_invalid {background-color: #FFB4B4;border-color: #DE5555;}.ace_fade-fold-widgets .ace_fold-widget {-webkit-transition: opacity 0.4s ease 0.05s;transition: opacity 0.4s ease 0.05s;opacity: 0;}.ace_fade-fold-widgets:hover .ace_fold-widget {-webkit-transition: opacity 0.05s ease 0.05s;transition: opacity 0.05s ease 0.05s;opacity:1;}.ace_underline {text-decoration: underline;}.ace_bold {font-weight: bold;}.ace_nobold .ace_bold {font-weight: normal;}.ace_italic {font-style: italic;}.ace_error-marker {background-color: rgba(255, 0, 0,0.2);position: absolute;z-index: 9;}.ace_highlight-marker {background-color: rgba(255, 255, 0,0.2);position: absolute;z-index: 8;}.ace_br1 {border-top-left-radius    : 3px;}.ace_br2 {border-top-right-radius   : 3px;}.ace_br3 {border-top-left-radius    : 3px; border-top-right-radius:    3px;}.ace_br4 {border-bottom-right-radius: 3px;}.ace_br5 {border-top-left-radius    : 3px; border-bottom-right-radius: 3px;}.ace_br6 {border-top-right-radius   : 3px; border-bottom-right-radius: 3px;}.ace_br7 {border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px;}.ace_br8 {border-bottom-left-radius : 3px;}.ace_br9 {border-top-left-radius    : 3px; border-bottom-left-radius:  3px;}.ace_br10{border-top-right-radius   : 3px; border-bottom-left-radius:  3px;}.ace_br11{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-left-radius:  3px;}.ace_br12{border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br13{border-top-left-radius    : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br14{border-top-right-radius   : 3px; border-bottom-right-radius: 3px; border-bottom-left-radius:  3px;}.ace_br15{border-top-left-radius    : 3px; border-top-right-radius:    3px; border-bottom-right-radius: 3px; border-bottom-left-radius: 3px;}
/*# sourceURL=ace/css/ace_editor.css */</style><style id="ace-tm">.ace-tm .ace_gutter {background: #f0f0f0;color: #333;}.ace-tm .ace_print-margin {width: 1px;background: #e8e8e8;}.ace-tm .ace_fold {background-color: #6B72E6;}.ace-tm {background-color: #FFFFFF;color: black;}.ace-tm .ace_cursor {color: black;}.ace-tm .ace_invisible {color: rgb(191, 191, 191);}.ace-tm .ace_storage,.ace-tm .ace_keyword {color: blue;}.ace-tm .ace_constant {color: rgb(197, 6, 11);}.ace-tm .ace_constant.ace_buildin {color: rgb(88, 72, 246);}.ace-tm .ace_constant.ace_language {color: rgb(88, 92, 246);}.ace-tm .ace_constant.ace_library {color: rgb(6, 150, 14);}.ace-tm .ace_invalid {background-color: rgba(255, 0, 0, 0.1);color: red;}.ace-tm .ace_support.ace_function {color: rgb(60, 76, 114);}.ace-tm .ace_support.ace_constant {color: rgb(6, 150, 14);}.ace-tm .ace_support.ace_type,.ace-tm .ace_support.ace_class {color: rgb(109, 121, 222);}.ace-tm .ace_keyword.ace_operator {color: rgb(104, 118, 135);}.ace-tm .ace_string {color: rgb(3, 106, 7);}.ace-tm .ace_comment {color: rgb(76, 136, 107);}.ace-tm .ace_comment.ace_doc {color: rgb(0, 102, 255);}.ace-tm .ace_comment.ace_doc.ace_tag {color: rgb(128, 159, 191);}.ace-tm .ace_constant.ace_numeric {color: rgb(0, 0, 205);}.ace-tm .ace_variable {color: rgb(49, 132, 149);}.ace-tm .ace_xml-pe {color: rgb(104, 104, 91);}.ace-tm .ace_entity.ace_name.ace_function {color: #0000A2;}.ace-tm .ace_heading {color: rgb(12, 7, 255);}.ace-tm .ace_list {color:rgb(185, 6, 144);}.ace-tm .ace_meta.ace_tag {color:rgb(0, 22, 142);}.ace-tm .ace_string.ace_regex {color: rgb(255, 0, 0)}.ace-tm .ace_marker-layer .ace_selection {background: rgb(181, 213, 255);}.ace-tm.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px white;}.ace-tm .ace_marker-layer .ace_step {background: rgb(252, 255, 0);}.ace-tm .ace_marker-layer .ace_stack {background: rgb(164, 229, 101);}.ace-tm .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid rgb(192, 192, 192);}.ace-tm .ace_marker-layer .ace_active-line {background: rgba(0, 0, 0, 0.07);}.ace-tm .ace_gutter-active-line {background-color : #dcdcdc;}.ace-tm .ace_marker-layer .ace_selected-word {background: rgb(250, 250, 255);border: 1px solid rgb(200, 200, 250);}.ace-tm .ace_indent-guide {background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==") right repeat-y;}
/*# sourceURL=ace/css/ace-tm */</style><style>    .error_widget_wrapper {        background: inherit;        color: inherit;        border:none    }    .error_widget {        border-top: solid 2px;        border-bottom: solid 2px;        margin: 5px 0;        padding: 10px 40px;        white-space: pre-wrap;    }    .error_widget.ace_error, .error_widget_arrow.ace_error{        border-color: #ff5a5a    }    .error_widget.ace_warning, .error_widget_arrow.ace_warning{        border-color: #F1D817    }    .error_widget.ace_info, .error_widget_arrow.ace_info{        border-color: #5a5a5a    }    .error_widget.ace_ok, .error_widget_arrow.ace_ok{        border-color: #5aaa5a    }    .error_widget_arrow {        position: absolute;        border: solid 5px;        border-top-color: transparent!important;        border-right-color: transparent!important;        border-left-color: transparent!important;        top: -5px;    }</style>
        <script id="nocomb.ace-builds/ext-language_tools.js" src="./social _distance_files/ext-language_tools.js" type="text/javascript"></script><style>.ace_snippet-marker {    -moz-box-sizing: border-box;    box-sizing: border-box;    background: rgba(194, 193, 208, 0.09);    border: 1px dotted rgba(211, 208, 235, 0.62);    position: absolute;}</style><style>.ace_editor.ace_autocomplete .ace_marker-layer .ace_active-line {    background-color: #CAD6FA;    z-index: 1;}.ace_editor.ace_autocomplete .ace_line-hover {    border: 1px solid #abbffe;    margin-top: -1px;    background: rgba(233,233,253,0.4);}.ace_editor.ace_autocomplete .ace_line-hover {    position: absolute;    z-index: 2;}.ace_editor.ace_autocomplete .ace_scroller {   background: none;   border: none;   box-shadow: none;}.ace_rightAlignedText {    color: gray;    display: inline-block;    position: absolute;    right: 4px;    text-align: right;    z-index: -1;}.ace_editor.ace_autocomplete .ace_completion-highlight{    color: #000;    text-shadow: 0 0 0.01em;}.ace_editor.ace_autocomplete {    width: 280px;    z-index: 200000;    background: #fbfbfb;    color: #444;    border: 1px lightgray solid;    position: fixed;    box-shadow: 2px 3px 5px rgba(0,0,0,.2);    line-height: 1.4;}</style>
        <script id="nocomb.ace-builds/ext-modelist.js" src="./social _distance_files/ext-modelist.js" type="text/javascript"></script>

<style type="text/css">.MathJax_Hover_Frame {border-radius: .25em; -webkit-border-radius: .25em; -moz-border-radius: .25em; -khtml-border-radius: .25em; box-shadow: 0px 0px 15px #83A; -webkit-box-shadow: 0px 0px 15px #83A; -moz-box-shadow: 0px 0px 15px #83A; -khtml-box-shadow: 0px 0px 15px #83A; border: 1px solid #A6D ! important; display: inline-block; position: absolute}
.MathJax_Menu_Button .MathJax_Hover_Arrow {position: absolute; cursor: pointer; display: inline-block; border: 2px solid #AAA; border-radius: 4px; -webkit-border-radius: 4px; -moz-border-radius: 4px; -khtml-border-radius: 4px; font-family: 'Courier New',Courier; font-size: 9px; color: #F0F0F0}
.MathJax_Menu_Button .MathJax_Hover_Arrow span {display: block; background-color: #AAA; border: 1px solid; border-radius: 3px; line-height: 0; padding: 4px}
.MathJax_Hover_Arrow:hover {color: white!important; border: 2px solid #CCC!important}
.MathJax_Hover_Arrow:hover span {background-color: #CCC!important}
</style><style type="text/css">#MathJax_About {position: fixed; left: 50%; width: auto; text-align: center; border: 3px outset; padding: 1em 2em; background-color: #DDDDDD; color: black; cursor: default; font-family: message-box; font-size: 120%; font-style: normal; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; z-index: 201; border-radius: 15px; -webkit-border-radius: 15px; -moz-border-radius: 15px; -khtml-border-radius: 15px; box-shadow: 0px 10px 20px #808080; -webkit-box-shadow: 0px 10px 20px #808080; -moz-box-shadow: 0px 10px 20px #808080; -khtml-box-shadow: 0px 10px 20px #808080; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
#MathJax_About.MathJax_MousePost {outline: none}
.MathJax_Menu {position: absolute; background-color: white; color: black; width: auto; padding: 5px 0px; border: 1px solid #CCCCCC; margin: 0; cursor: default; font: menu; text-align: left; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; z-index: 201; border-radius: 5px; -webkit-border-radius: 5px; -moz-border-radius: 5px; -khtml-border-radius: 5px; box-shadow: 0px 10px 20px #808080; -webkit-box-shadow: 0px 10px 20px #808080; -moz-box-shadow: 0px 10px 20px #808080; -khtml-box-shadow: 0px 10px 20px #808080; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
.MathJax_MenuItem {padding: 1px 2em; background: transparent}
.MathJax_MenuArrow {position: absolute; right: .5em; padding-top: .25em; color: #666666; font-size: .75em}
.MathJax_MenuActive .MathJax_MenuArrow {color: white}
.MathJax_MenuArrow.RTL {left: .5em; right: auto}
.MathJax_MenuCheck {position: absolute; left: .7em}
.MathJax_MenuCheck.RTL {right: .7em; left: auto}
.MathJax_MenuRadioCheck {position: absolute; left: .7em}
.MathJax_MenuRadioCheck.RTL {right: .7em; left: auto}
.MathJax_MenuLabel {padding: 1px 2em 3px 1.33em; font-style: italic}
.MathJax_MenuRule {border-top: 1px solid #DDDDDD; margin: 4px 3px}
.MathJax_MenuDisabled {color: GrayText}
.MathJax_MenuActive {background-color: #606872; color: white}
.MathJax_MenuDisabled:focus, .MathJax_MenuLabel:focus {background-color: #E8E8E8}
.MathJax_ContextMenu:focus {outline: none}
.MathJax_ContextMenu .MathJax_MenuItem:focus {outline: none}
#MathJax_AboutClose {top: .2em; right: .2em}
.MathJax_Menu .MathJax_MenuClose {top: -10px; left: -10px}
.MathJax_MenuClose {position: absolute; cursor: pointer; display: inline-block; border: 2px solid #AAA; border-radius: 18px; -webkit-border-radius: 18px; -moz-border-radius: 18px; -khtml-border-radius: 18px; font-family: 'Courier New',Courier; font-size: 24px; color: #F0F0F0}
.MathJax_MenuClose span {display: block; background-color: #AAA; border: 1.5px solid; border-radius: 18px; -webkit-border-radius: 18px; -moz-border-radius: 18px; -khtml-border-radius: 18px; line-height: 0; padding: 8px 0 6px}
.MathJax_MenuClose:hover {color: white!important; border: 2px solid #CCC!important}
.MathJax_MenuClose:hover span {background-color: #CCC!important}
.MathJax_MenuClose:hover:focus {outline: none}
</style><style type="text/css">.MathJax_Preview .MJXf-math {color: inherit!important}
</style><style type="text/css">.MJX_Assistive_MathML {position: absolute!important; top: 0; left: 0; clip: rect(1px, 1px, 1px, 1px); padding: 1px 0 0 0!important; border: 0!important; height: 1px!important; width: 1px!important; overflow: hidden!important; display: block!important; -webkit-touch-callout: none; -webkit-user-select: none; -khtml-user-select: none; -moz-user-select: none; -ms-user-select: none; user-select: none}
.MJX_Assistive_MathML.MJX_Assistive_MathML_Block {width: 100%!important}
</style><style type="text/css">#MathJax_Zoom {position: absolute; background-color: #F0F0F0; overflow: auto; display: block; z-index: 301; padding: .5em; border: 1px solid black; margin: 0; font-weight: normal; font-style: normal; text-align: left; text-indent: 0; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; -webkit-box-sizing: content-box; -moz-box-sizing: content-box; box-sizing: content-box; box-shadow: 5px 5px 15px #AAAAAA; -webkit-box-shadow: 5px 5px 15px #AAAAAA; -moz-box-shadow: 5px 5px 15px #AAAAAA; -khtml-box-shadow: 5px 5px 15px #AAAAAA; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true')}
#MathJax_ZoomOverlay {position: absolute; left: 0; top: 0; z-index: 300; display: inline-block; width: 100%; height: 100%; border: 0; padding: 0; margin: 0; background-color: white; opacity: 0; filter: alpha(opacity=0)}
#MathJax_ZoomFrame {position: relative; display: inline-block; height: 0; width: 0}
#MathJax_ZoomEventTrap {position: absolute; left: 0; top: 0; z-index: 302; display: inline-block; border: 0; padding: 0; margin: 0; background-color: white; opacity: 0; filter: alpha(opacity=0)}
</style><style type="text/css">.MathJax_Preview {color: #888}
#MathJax_Message {position: fixed; left: 1em; bottom: 1.5em; background-color: #E6E6E6; border: 1px solid #959595; margin: 0px; padding: 2px 8px; z-index: 102; color: black; font-size: 80%; width: auto; white-space: nowrap}
#MathJax_MSIE_Frame {position: absolute; top: 0; left: 0; width: 0px; z-index: 101; border: 0px; margin: 0px; padding: 0px}
.MathJax_Error {color: #CC0000; font-style: italic}
</style><style type="text/css">.MathJax_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax .merror {background-color: #FFFF88; color: #CC0000; border: 1px solid #CC0000; padding: 1px 3px; font-style: normal; font-size: 90%}
.MathJax .MJX-monospace {font-family: monospace}
.MathJax .MJX-sans-serif {font-family: sans-serif}
#MathJax_Tooltip {background-color: InfoBackground; color: InfoText; border: 1px solid black; box-shadow: 2px 2px 5px #AAAAAA; -webkit-box-shadow: 2px 2px 5px #AAAAAA; -moz-box-shadow: 2px 2px 5px #AAAAAA; -khtml-box-shadow: 2px 2px 5px #AAAAAA; filter: progid:DXImageTransform.Microsoft.dropshadow(OffX=2, OffY=2, Color='gray', Positive='true'); padding: 3px 4px; z-index: 401; position: absolute; left: 0; top: 0; width: auto; height: auto; display: none}
.MathJax {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax:focus, body :focus .MathJax {display: inline-table}
.MathJax.MathJax_FullWidth {text-align: center; display: table-cell!important; width: 10000em!important}
.MathJax img, .MathJax nobr, .MathJax a {border: 0; padding: 0; margin: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; vertical-align: 0; line-height: normal; text-decoration: none}
img.MathJax_strut {border: 0!important; padding: 0!important; margin: 0!important; vertical-align: 0!important}
.MathJax span {display: inline; position: static; border: 0; padding: 0; margin: 0; vertical-align: 0; line-height: normal; text-decoration: none; box-sizing: content-box}
.MathJax nobr {white-space: nowrap!important}
.MathJax img {display: inline!important; float: none!important}
.MathJax * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.MathJax_Processing {visibility: hidden; position: fixed; width: 0; height: 0; overflow: hidden}
.MathJax_Processed {display: none!important}
.MathJax_test {font-style: normal; font-weight: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-transform: none; letter-spacing: normal; word-spacing: normal; overflow: hidden; height: 1px}
.MathJax_test.mjx-test-display {display: table!important}
.MathJax_test.mjx-test-inline {display: inline!important; margin-right: -1px}
.MathJax_test.mjx-test-default {display: block!important; clear: both}
.MathJax_ex_box {display: inline-block!important; position: absolute; overflow: hidden; min-height: 0; max-height: none; padding: 0; border: 0; margin: 0; width: 1px; height: 60ex}
.MathJax_em_box {display: inline-block!important; position: absolute; overflow: hidden; min-height: 0; max-height: none; padding: 0; border: 0; margin: 0; width: 1px; height: 60em}
.mjx-test-inline .MathJax_left_box {display: inline-block; width: 0; float: left}
.mjx-test-inline .MathJax_right_box {display: inline-block; width: 0; float: right}
.mjx-test-display .MathJax_right_box {display: table-cell!important; width: 10000em!important; min-width: 0; max-width: none; padding: 0; border: 0; margin: 0}
.MathJax .MathJax_HitBox {cursor: text; background: white; opacity: 0; filter: alpha(opacity=0)}
.MathJax .MathJax_HitBox * {filter: none; opacity: 1; background: transparent}
#MathJax_Tooltip * {filter: none; opacity: 1; background: transparent}
@font-face {font-family: MathJax_Main; src: url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/woff/MathJax_Main-Regular.woff?V=2.7.5') format('woff'), url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/otf/MathJax_Main-Regular.otf?V=2.7.5') format('opentype')}
@font-face {font-family: MathJax_Main-bold; src: url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/woff/MathJax_Main-Bold.woff?V=2.7.5') format('woff'), url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/otf/MathJax_Main-Bold.otf?V=2.7.5') format('opentype')}
@font-face {font-family: MathJax_Main-italic; src: url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/woff/MathJax_Main-Italic.woff?V=2.7.5') format('woff'), url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/otf/MathJax_Main-Italic.otf?V=2.7.5') format('opentype')}
@font-face {font-family: MathJax_Math-italic; src: url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/woff/MathJax_Math-Italic.woff?V=2.7.5') format('woff'), url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/otf/MathJax_Math-Italic.otf?V=2.7.5') format('opentype')}
@font-face {font-family: MathJax_Caligraphic; src: url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/woff/MathJax_Caligraphic-Regular.woff?V=2.7.5') format('woff'), url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/otf/MathJax_Caligraphic-Regular.otf?V=2.7.5') format('opentype')}
@font-face {font-family: MathJax_Size1; src: url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/woff/MathJax_Size1-Regular.woff?V=2.7.5') format('woff'), url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/otf/MathJax_Size1-Regular.otf?V=2.7.5') format('opentype')}
@font-face {font-family: MathJax_Size2; src: url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/woff/MathJax_Size2-Regular.woff?V=2.7.5') format('woff'), url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/otf/MathJax_Size2-Regular.otf?V=2.7.5') format('opentype')}
@font-face {font-family: MathJax_Size3; src: url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/woff/MathJax_Size3-Regular.woff?V=2.7.5') format('woff'), url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/otf/MathJax_Size3-Regular.otf?V=2.7.5') format('opentype')}
@font-face {font-family: MathJax_Size4; src: url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/woff/MathJax_Size4-Regular.woff?V=2.7.5') format('woff'), url('https://assets.codeforces.com/mathjax/fonts/HTML-CSS/TeX/otf/MathJax_Size4-Regular.otf?V=2.7.5') format('opentype')}
.MathJax .noError {vertical-align: ; font-size: 90%; text-align: left; color: black; padding: 1px 3px; border: 1px solid}
</style><style type="text/css">.MJXp-script {font-size: .8em}
.MJXp-right {-webkit-transform-origin: right; -moz-transform-origin: right; -ms-transform-origin: right; -o-transform-origin: right; transform-origin: right}
.MJXp-bold {font-weight: bold}
.MJXp-italic {font-style: italic}
.MJXp-scr {font-family: MathJax_Script,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-frak {font-family: MathJax_Fraktur,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-sf {font-family: MathJax_SansSerif,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-cal {font-family: MathJax_Caligraphic,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-mono {font-family: MathJax_Typewriter,'Times New Roman',Times,STIXGeneral,serif}
.MJXp-largeop {font-size: 150%}
.MJXp-largeop.MJXp-int {vertical-align: -.2em}
.MJXp-math {display: inline-block; line-height: 1.2; text-indent: 0; font-family: 'Times New Roman',Times,STIXGeneral,serif; white-space: nowrap; border-collapse: collapse}
.MJXp-display {display: block; text-align: center; margin: 1em 0}
.MJXp-math span {display: inline-block}
.MJXp-box {display: block!important; text-align: center}
.MJXp-box:after {content: " "}
.MJXp-rule {display: block!important; margin-top: .1em}
.MJXp-char {display: block!important}
.MJXp-mo {margin: 0 .15em}
.MJXp-mfrac {margin: 0 .125em; vertical-align: .25em}
.MJXp-denom {display: inline-table!important; width: 100%}
.MJXp-denom > * {display: table-row!important}
.MJXp-surd {vertical-align: top}
.MJXp-surd > * {display: block!important}
.MJXp-script-box > *  {display: table!important; height: 50%}
.MJXp-script-box > * > * {display: table-cell!important; vertical-align: top}
.MJXp-script-box > *:last-child > * {vertical-align: bottom}
.MJXp-script-box > * > * > * {display: block!important}
.MJXp-mphantom {visibility: hidden}
.MJXp-munderover, .MJXp-munder {display: inline-table!important}
.MJXp-over {display: inline-block!important; text-align: center}
.MJXp-over > * {display: block!important}
.MJXp-munderover > *, .MJXp-munder > * {display: table-row!important}
.MJXp-mtable {vertical-align: .25em; margin: 0 .125em}
.MJXp-mtable > * {display: inline-table!important; vertical-align: middle}
.MJXp-mtr {display: table-row!important}
.MJXp-mtd {display: table-cell!important; text-align: center; padding: .5em 0 0 .5em}
.MJXp-mtr > .MJXp-mtd:first-child {padding-left: 0}
.MJXp-mtr:first-child > .MJXp-mtd {padding-top: 0}
.MJXp-mlabeledtr {display: table-row!important}
.MJXp-mlabeledtr > .MJXp-mtd:first-child {padding-left: 0}
.MJXp-mlabeledtr:first-child > .MJXp-mtd {padding-top: 0}
.MJXp-merror {background-color: #FFFF88; color: #CC0000; border: 1px solid #CC0000; padding: 1px 3px; font-style: normal; font-size: 90%}
.MJXp-scale0 {-webkit-transform: scaleX(.0); -moz-transform: scaleX(.0); -ms-transform: scaleX(.0); -o-transform: scaleX(.0); transform: scaleX(.0)}
.MJXp-scale1 {-webkit-transform: scaleX(.1); -moz-transform: scaleX(.1); -ms-transform: scaleX(.1); -o-transform: scaleX(.1); transform: scaleX(.1)}
.MJXp-scale2 {-webkit-transform: scaleX(.2); -moz-transform: scaleX(.2); -ms-transform: scaleX(.2); -o-transform: scaleX(.2); transform: scaleX(.2)}
.MJXp-scale3 {-webkit-transform: scaleX(.3); -moz-transform: scaleX(.3); -ms-transform: scaleX(.3); -o-transform: scaleX(.3); transform: scaleX(.3)}
.MJXp-scale4 {-webkit-transform: scaleX(.4); -moz-transform: scaleX(.4); -ms-transform: scaleX(.4); -o-transform: scaleX(.4); transform: scaleX(.4)}
.MJXp-scale5 {-webkit-transform: scaleX(.5); -moz-transform: scaleX(.5); -ms-transform: scaleX(.5); -o-transform: scaleX(.5); transform: scaleX(.5)}
.MJXp-scale6 {-webkit-transform: scaleX(.6); -moz-transform: scaleX(.6); -ms-transform: scaleX(.6); -o-transform: scaleX(.6); transform: scaleX(.6)}
.MJXp-scale7 {-webkit-transform: scaleX(.7); -moz-transform: scaleX(.7); -ms-transform: scaleX(.7); -o-transform: scaleX(.7); transform: scaleX(.7)}
.MJXp-scale8 {-webkit-transform: scaleX(.8); -moz-transform: scaleX(.8); -ms-transform: scaleX(.8); -o-transform: scaleX(.8); transform: scaleX(.8)}
.MJXp-scale9 {-webkit-transform: scaleX(.9); -moz-transform: scaleX(.9); -ms-transform: scaleX(.9); -o-transform: scaleX(.9); transform: scaleX(.9)}
.MathJax_PHTML .noError {vertical-align: ; font-size: 90%; text-align: left; color: black; padding: 1px 3px; border: 1px solid}
</style><style type="text/css">.fb_hidden{position:absolute;top:-10000px;z-index:10001}.fb_reposition{overflow:hidden;position:relative}.fb_invisible{display:none}.fb_reset{background:none;border:0;border-spacing:0;color:#000;cursor:auto;direction:ltr;font-family:"lucida grande", tahoma, verdana, arial, sans-serif;font-size:11px;font-style:normal;font-variant:normal;font-weight:normal;letter-spacing:normal;line-height:1;margin:0;overflow:visible;padding:0;text-align:left;text-decoration:none;text-indent:0;text-shadow:none;text-transform:none;visibility:visible;white-space:normal;word-spacing:normal}.fb_reset>div{overflow:hidden}@keyframes fb_transform{from{opacity:0;transform:scale(.95)}to{opacity:1;transform:scale(1)}}.fb_animate{animation:fb_transform .3s forwards}
.fb_dialog{background:rgba(82, 82, 82, .7);position:absolute;top:-10000px;z-index:10001}.fb_dialog_advanced{border-radius:8px;padding:10px}.fb_dialog_content{background:#fff;color:#373737}.fb_dialog_close_icon{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 0 transparent;cursor:pointer;display:block;height:15px;position:absolute;right:18px;top:17px;width:15px}.fb_dialog_mobile .fb_dialog_close_icon{left:5px;right:auto;top:5px}.fb_dialog_padding{background-color:transparent;position:absolute;width:1px;z-index:-1}.fb_dialog_close_icon:hover{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -15px transparent}.fb_dialog_close_icon:active{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -30px transparent}.fb_dialog_iframe{line-height:0}.fb_dialog_content .dialog_title{background:#6d84b4;border:1px solid #365899;color:#fff;font-size:14px;font-weight:bold;margin:0}.fb_dialog_content .dialog_title>span{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yd/r/Cou7n-nqK52.gif) no-repeat 5px 50%;float:left;padding:5px 0 7px 26px}body.fb_hidden{height:100%;left:0;margin:0;overflow:visible;position:absolute;top:-10000px;transform:none;width:100%}.fb_dialog.fb_dialog_mobile.loading{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/ya/r/3rhSv5V8j3o.gif) white no-repeat 50% 50%;min-height:100%;min-width:100%;overflow:hidden;position:absolute;top:0;z-index:10001}.fb_dialog.fb_dialog_mobile.loading.centered{background:none;height:auto;min-height:initial;min-width:initial;width:auto}.fb_dialog.fb_dialog_mobile.loading.centered #fb_dialog_loader_spinner{width:100%}.fb_dialog.fb_dialog_mobile.loading.centered .fb_dialog_content{background:none}.loading.centered #fb_dialog_loader_close{clear:both;color:#fff;display:block;font-size:18px;padding-top:20px}#fb-root #fb_dialog_ipad_overlay{background:rgba(0, 0, 0, .4);bottom:0;left:0;min-height:100%;position:absolute;right:0;top:0;width:100%;z-index:10000}#fb-root #fb_dialog_ipad_overlay.hidden{display:none}.fb_dialog.fb_dialog_mobile.loading iframe{visibility:hidden}.fb_dialog_mobile .fb_dialog_iframe{position:sticky;top:0}.fb_dialog_content .dialog_header{background:linear-gradient(from(#738aba), to(#2c4987));border-bottom:1px solid;border-color:#043b87;box-shadow:white 0 1px 1px -1px inset;color:#fff;font:bold 14px Helvetica, sans-serif;text-overflow:ellipsis;text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0;vertical-align:middle;white-space:nowrap}.fb_dialog_content .dialog_header table{height:43px;width:100%}.fb_dialog_content .dialog_header td.header_left{font-size:12px;padding-left:5px;vertical-align:middle;width:60px}.fb_dialog_content .dialog_header td.header_right{font-size:12px;padding-right:5px;vertical-align:middle;width:60px}.fb_dialog_content .touchable_button{background:linear-gradient(from(#4267B2), to(#2a4887));background-clip:padding-box;border:1px solid #29487d;border-radius:3px;display:inline-block;line-height:18px;margin-top:3px;max-width:85px;padding:4px 12px;position:relative}.fb_dialog_content .dialog_header .touchable_button input{background:none;border:none;color:#fff;font:bold 12px Helvetica, sans-serif;margin:2px -12px;padding:2px 6px 3px 6px;text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0}.fb_dialog_content .dialog_header .header_center{color:#fff;font-size:16px;font-weight:bold;line-height:18px;text-align:center;vertical-align:middle}.fb_dialog_content .dialog_content{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/y9/r/jKEcVPZFk-2.gif) no-repeat 50% 50%;border:1px solid #4a4a4a;border-bottom:0;border-top:0;height:150px}.fb_dialog_content .dialog_footer{background:#f5f6f7;border:1px solid #4a4a4a;border-top-color:#ccc;height:40px}#fb_dialog_loader_close{float:left}.fb_dialog.fb_dialog_mobile .fb_dialog_close_button{text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0}.fb_dialog.fb_dialog_mobile .fb_dialog_close_icon{visibility:hidden}#fb_dialog_loader_spinner{animation:rotateSpinner 1.2s linear infinite;background-color:transparent;background-image:url(https://static.xx.fbcdn.net/rsrc.php/v3/yD/r/t-wz8gw1xG1.png);background-position:50% 50%;background-repeat:no-repeat;height:24px;width:24px}@keyframes rotateSpinner{0%{transform:rotate(0deg)}100%{transform:rotate(360deg)}}
.fb_iframe_widget{display:inline-block;position:relative}.fb_iframe_widget span{display:inline-block;position:relative;text-align:justify}.fb_iframe_widget iframe{position:absolute}.fb_iframe_widget_fluid_desktop,.fb_iframe_widget_fluid_desktop span,.fb_iframe_widget_fluid_desktop iframe{max-width:100%}.fb_iframe_widget_fluid_desktop iframe{min-width:220px;position:relative}.fb_iframe_widget_lift{z-index:1}.fb_iframe_widget_fluid{display:inline}.fb_iframe_widget_fluid span{width:100%}</style></head>
<body class=" " data-gr-c-s-loaded="true"><div id="MathJax_Message" style="display: none;"></div><div style="visibility: hidden; overflow: hidden; position: absolute; top: 0px; height: 1px; width: auto; padding: 0px; border: 0px; margin: 0px; text-align: left; text-indent: 0px; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal;"><div id="MathJax_Hidden"></div></div><span style="display:none;" class="csrf-token" data-csrf="0470df275c4e2aa32a4952cf51b1f26b">&nbsp;</span>
<!-- .notificationTextCleaner used in Codeforces.showAnnouncements() -->
<div class="notificationTextCleaner" style="font-size: 0px"></div>
<div class="button-up" style="opacity: 0.7; width: 30px; height: 100%; position: fixed; left: 0px; top: 0px; cursor: pointer; text-align: center; line-height: 30px; color: rgb(211, 219, 228); font-weight: bold; font-size: 20px; display: none; background: none;"><i class="icon-circle-arrow-up"></i></div>
<div class="verdictPrototypeDiv" style="display: none;"></div>

<!-- Codeforces JavaScripts. -->
<script type="text/javascript">
    String.prototype.hashCode = function() {
        var hash = 0, i, chr;
        if (this.length === 0) return hash;
        for (i = 0; i < this.length; i++) {
            chr   = this.charCodeAt(i);
            hash  = ((hash << 5) - hash) + chr;
            hash |= 0; // Convert to 32bit integer
        }
        return hash;
    };

    var queryMobile = Codeforces.queryString.mobile;
    if (queryMobile === "true" || queryMobile === "false") {
        Codeforces.putToStorage("useMobile", queryMobile == "true");
    } else {
        var useMobile = Codeforces.getFromStorage("useMobile");
        if (useMobile === true || useMobile === false) {
            if (useMobile != false) {
                Codeforces.redirect(Codeforces.updateUrlParameter(document.location.href, "mobile", useMobile));
            }
        }
    }
</script>
<script type="text/javascript">
    if (window.parent.frames.length > 0) {
        window.stop();
    }
</script>


<script type="text/javascript">
    window.fbAsyncInit = function() {
        FB.init({
            appId      : '554666954583323',
            xfbml      : true,
            version    : 'v2.8'
        });
        FB.AppEvents.logPageView();
    };

    (function(d, s, id){
        var js, fjs = d.getElementsByTagName(s)[0];
        if (d.getElementById(id)) {return;}
        js = d.createElement(s); js.id = id;
        js.src = "//connect.facebook.net/en_US/sdk.js";
        fjs.parentNode.insertBefore(js, fjs);
    }(document, 'script', 'facebook-jssdk'));
</script>


    <script type="text/javascript">
        $(document).ready(function () {
    (function () {
        jQuery.expr[':'].containsCI = function(elem, index, match) {
            return !match || !match.length || match.length < 4 || !match[3] || (
                    elem.textContent || elem.innerText || jQuery(elem).text() || ''
            ).toLowerCase().indexOf(match[3].toLowerCase()) >= 0;
        }
    }(jQuery));

    $.ajaxPrefilter(function(options, originalOptions, xhr) {
        var csrf = Codeforces.getCsrfToken();

        if (csrf) {
            var data = originalOptions.data;
            if (originalOptions.data !== undefined) {
                if (Object.prototype.toString.call(originalOptions.data) === '[object String]') {
                    data = $.deparam(originalOptions.data);
                }
            } else {
                data = {};
            }
            options.data = $.param($.extend(data, { csrf_token: csrf }));
        }
    });

    window.getCodeforcesServerTime = function(callback) {
        $.post("/data/time", {}, callback, "json");
    }

    window.updateTypography = function () {
        $("div.ttypography code").addClass("tt");
        $("div.ttypography pre>code").addClass("prettyprint").removeClass("tt");
        $("div.ttypography table").addClass("bordertable");
        prettyPrint();
    }

    $.ajaxSetup({ scriptCharset: "utf-8" ,contentType: "application/x-www-form-urlencoded; charset=UTF-8", headers: {
        'X-Csrf-Token': Codeforces.getCsrfToken()
    }});

    window.updateTypography();

    Codeforces.signForms();

    setTimeout(function() {
        $(".second-level-menu-list").lavaLamp({
            fx: "backout",
            speed: 700
        });
    }, 100);


    Codeforces.countdown();
    $("a[rel='photobox']").colorbox();

        var count = 0;

        function getDelay() {
            var delay = 0;
            var last = Codeforces.getFromStorage("LastOnlineTimeUpdaterMillis", 0);
            if (last && last != null) {
                var period = count < 20 ? 180 * 1000 : 360 * 1000;
                delay = period - (new Date().getTime() - last);
                if (delay < 0)
                    delay = 0;
            }
            return delay;
        }

        window.setInterval(function () {
            if (getDelay() <= 0 && count < 120) {
                ++count;
                Codeforces.ping("/data/update-online");
            }
        }, 5000);

        var handle = "codingid6";
        $("a.rated-user:contains(" + handle + "), span.participant:contains(" + handle + ")").each(function () {
            if ($(this).text() == handle) {
                var td = $(this).parent();
                var tr = $(this).parent().parent();
                if (td.is("td") && tr.is("tr")) {
                    tr.addClass("highlighted-row");
                }
            }
        });

    function showAnnouncements(json) {
        //info("j=" + JSON.stringify(json));

        if (json.t != "a") {
            return;
        }
        // console.log("Got announcement from channel");
        setTimeout(function() {
            Codeforces.showAnnouncements(json.d, "en");
        }, Math.random() * 500);
    }

    function showEventCatcherUserMessage(json) {
        if (json.t == "s") {
            var points = json.d[5];
            var passedTestCount = json.d[7];
            var judgedTestCount = json.d[8];
            var verdict = preparedVerdictFormats[json.d[12]];
            var verdictPrototypeDiv = $(".verdictPrototypeDiv");
            verdictPrototypeDiv.html(verdict);
            if (judgedTestCount != null && judgedTestCount != undefined) {
                verdictPrototypeDiv.find(".verdict-format-judged").text(judgedTestCount);
            }
            if (passedTestCount != null && passedTestCount != undefined) {
                verdictPrototypeDiv.find(".verdict-format-passed").text(passedTestCount);
            }
            if (points != null && points != undefined) {
                verdictPrototypeDiv.find(".verdict-format-points").text(points);
            }
            Codeforces.showMessage(verdictPrototypeDiv.text());
        }
    }

    $(".clickable-title").each(function() {
        var title = $(this).attr("data-title");
        if (title) {
            var tmp = document.createElement("DIV");
            tmp.innerHTML = title;
            $(this).attr("title", tmp.textContent || tmp.innerText || "");
        }
    });

    $(".clickable-title").click(function() {
        var title = $(this).attr("data-title");
        if (title) {
            Codeforces.alert(title);
        } else {
            Codeforces.alert($(this).attr("title"));
        }
    }).css("position", "relative").css("bottom", "3px");

        Codeforces.showDelayedMessage();

    Codeforces.reformatTimes();

    //Codeforces.initializePubSub();
    if (window.codeforcesOptions.subscribeServerUrl) {
        window.eventCatcher = new EventCatcher(
            window.codeforcesOptions.subscribeServerUrl,
            [
                Codeforces.getGlobalChannel(),
                Codeforces.getUserChannel(),
                Codeforces.getUserShowMessageChannel(),
                Codeforces.getContestChannel(),
                Codeforces.getParticipantChannel(),
                Codeforces.getTalkChannel()
            ]
        );

        if (Codeforces.getParticipantChannel()) {
            window.eventCatcher.subscribe(Codeforces.getParticipantChannel(), function(json) {
                showAnnouncements(json);
            });
        }

        if (Codeforces.getContestChannel()) {
            window.eventCatcher.subscribe(Codeforces.getContestChannel(), function(json) {
                showAnnouncements(json);
            });
        }

        if (Codeforces.getGlobalChannel()) {
            window.eventCatcher.subscribe(Codeforces.getGlobalChannel(), function(json) {
                showAnnouncements(json);
            });
        }

        if (Codeforces.getUserChannel()) {
            window.eventCatcher.subscribe(Codeforces.getUserChannel(), function(json) {
                showAnnouncements(json);
            });
        }

        if (Codeforces.getUserShowMessageChannel()) {
            window.eventCatcher.subscribe(Codeforces.getUserShowMessageChannel(), function(json) {
                showEventCatcherUserMessage(json);
            });
        }
    }

    Codeforces.setupContestTimes("/data/contests");
    Codeforces.setupSpoilers();
    Codeforces.setupTutorials("/data/problemTutorial");
        });
    </script>

<script type="text/javascript">
  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-743380-5']);
  _gaq.push(['_trackPageview']);

  (function () {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = (document.location.protocol == 'https:' ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();
</script>


<div id="body">
            <script type="application/javascript">
                window.setTimeout(function () {
                    var url = location.href;
                    var hashCode32 = Math.abs(url.hashCode()).toString();
                    var hashCode = "p" + hashCode32 + Math.abs((hashCode32 + url).hashCode());
                    var pvs = Codeforces.getFromStorage("pvs" + hashCode);
                    if (!pvs) {
                        $.post("/data/apv", {
                            ftaa: window._ftaa,
                            bfaa: window._bfaa,
                            url: url
                        }, function (json) {
                            if (json["success"] === "true") {
                                Codeforces.putToStorage("pvs" + hashCode, true);
                            }
                        }, "json");
                    }
                }, 5000);
            </script>
        

<div class="side-bell" style="visibility: hidden; opacity: 0.7; width: 30px; position: fixed; right: 0px; top: 0px; cursor: pointer; text-align: center; line-height: 30px; color: rgb(211, 219, 228); font-weight: bold; font-size: 10px; display: none;">
    <span class="icon-stack" style="width: 100%;">
        <i class="icon-circle icon-stack-base"></i>
        <i class="icon-bell-alt icon-light"></i>
    </span>
    <br>
    <span class="side-bell__count" style="position: relative; top: -10px;"></span>
</div>




<style>
    .header-bell {
        display: inline-block;
        position: relative;
        cursor: pointer;
    }

    .header-bell__img {
        opacity: 0.5;
        background-image: url("//sta.codeforces.com/s/13917/images/icons/bell_inactive-20x20.png");
        position: relative;
        bottom: 1px;
        width: 20px;
        height: 20px;
    }

    .header-bell__img-active  {
        opacity: 1 !important;
        background-image: url("//sta.codeforces.com/s/13917/images/icons/bell_active-20x20.png") !important;
    }

    .header-bell__count {
        position: absolute;
        top: 8px;
        left: 18px;
        font-weight: bold;
        font-size: 10px;
    }

    .bell-details {
        display: none;
        z-index: 5;
        border: 1px solid rgb(185, 185, 185);
        width: 40rem;
        max-height: 60rem;
        padding: 0;
        position: absolute;
        top: 20px;
        right: 0;
        background-color: white;
        overflow: scroll;
        overflow-x: hidden;
        overflow-y: auto;
    }
    .bell-details.sidebar-bell {
        position: fixed;
        right: 50px;
    }

    .bell-details__no-new {
        font-size: 1.3rem;
        display: block;
        text-align: center;
        color: #888 !important;
        padding: 1em;
    }

    .bell-details__recent-link {
        margin: 0;
        padding: 0.5em;
        text-align: center;
        border-top: 1px solid rgb(185, 185, 185);
    }

    .bell-details__recent-link a {
        font-size: 1.2rem;
    }

    .bell-details__proto-row-comment {
        display: none;
    }

    .bell-details__proto-row-blog-entry {
        display: none;
    }

    .bell-details__proto-row-comment-reply {
        display: none;
    }

    .bell-details__row {
        text-align: left;
        margin: 0.5em;
        padding: 0.25em 0.25em 0.75em 0.25em;
        clear: both;
    }

    .bell-details__row:hover {
        cursor: pointer;
        background-color: #def;
    }

    .bell-details__row-active {
        background-color: #def;
    }

    .bell-details__thumbnail-a {
        text-decoration: none;
    }

    .bell-details__row img {
        zoom: 50%;
        margin-right: 2em;
        float: left;
    }

    .bell-details__comment {
        padding-left: 45px;
        font-size: 1.3rem;
    }

    .bell-details__blog-entry {
        padding-left: 45px;
        font-size: 1.3rem;
    }

    .bell-details__comment-reply {
        padding-left: 45px;
        font-size: 1.3rem;
    }

    .bell-details__time {
        padding-left: 45px;
        margin-top: 0.2em;
        font-size: 1.1rem;
        color: #888 !important;
    }
</style>

<script>
    $(function () {
        if ($(window).width() < 1600) {
            $('.side-bell').css('width', '30px').css('line-height', '30px').css('font-size', '10px');
        }

        if ($(window).width() >= 1200) {
            $ (window).scroll (function () {
                if ($ (this).scrollTop () > 100) {
                    $(".bell-details").addClass("sidebar-bell");
                    $ ('.side-bell').fadeIn();
                } else {
                    $(".bell-details").removeClass("sidebar-bell");
                    $ ('.side-bell').fadeOut();
                }
            });

            $('.side-bell').hover(function () {
                $(this).animate({
                    'opacity':'1'
                }).css({'color':'#6a86a4'});
            }, function () {
                $(this).animate({
                    'opacity':'0.7'
                }).css({'color':'#d3dbe4'});
            });
        }

        $(".lang-chooser>div:first-child").prepend($("<span style='position: relative; bottom: 8px; padding: 0 0.5em;'>|</span>")).prepend($(".header-bell").show());
        function Bell() {
            var bell = this;
            var notifications = JSON.parse("[]");

            bell.notifications = {};

            for (var i in notifications) {
                if (notifications.hasOwnProperty(i)) {
                    bell.notifications[notifications[i].id] = notifications[i];
                }
            }

            function onClick(notification) {
                var notificationIds = [];
                var reason = notification.data.reasonType + "#" + notification.reasonId;
                for (id in bell.notifications) {
                    if (bell.notifications.hasOwnProperty(id)) {
                        var otherNotification = bell.notifications[id];
                        var otherReason = otherNotification.data.reasonType + "#" + otherNotification.reasonId;
                        if (otherReason == reason) {
                            notificationIds.push(otherNotification.id);
                        }
                    }
                }
                $.post("/data/notification", {action: "markAsRead", notificationIds: notificationIds.join(",")}, function(result) {
                    Codeforces.redirect(notification.data.url);
                }, "json");
            }

            var $bellDetails = $(".bell-details");
            bell.newCommentRow = function (notification) {
                var row = $(".bell-details__proto-row-comment").clone();
                row.addClass("bell-details__row").attr("data-notificationId", notification.id);
                row.find(".bell-details__thumbnail-a").attr("href", notification.data.reasonUserUrl);
                row.find("img").attr("src", notification.data.reasonUserThumbnailUrl);
                row.find(".bell-details__comment").html(
                        "ReasonUser mentioned you in a comment".replace("ReasonUser", notification.data.reasonUserHtml)
                );
                row.find(".bell-details__time").html(
                        "<span class='format-systemtimewithseconds'>"
                        + notification.creationTimeString
                        + "</span>"
                );
                row.removeClass("bell-details__proto-row-comment");
                row.click(function() {
                    onClick(notification);
                    return false;
                });
                return row;
            };
            bell.newFriendCommentRow = function (notification) {
                var row = $(".bell-details__proto-row-comment").clone();
                row.addClass("bell-details__row").attr("data-notificationId", notification.id);
                row.find(".bell-details__thumbnail-a").attr("href", notification.data.reasonUserUrl);
                row.find("img").attr("src", notification.data.reasonUserThumbnailUrl);
                row.find(".bell-details__comment").html(
                        "ReasonUser wrote a comment".replace("ReasonUser", notification.data.reasonUserHtml)
                );
                row.find(".bell-details__time").html(
                        "<span class='format-systemtimewithseconds'>"
                        + notification.creationTimeString
                        + "</span>"
                );
                row.removeClass("bell-details__proto-row-comment");
                row.click(function() {
                    onClick(notification);
                    return false;
                });
                return row;
            };
            bell.newCommentReplyRow = function (notification) {
                var row = $(".bell-details__proto-row-comment-reply").clone();
                row.addClass("bell-details__row").attr("data-notificationId", notification.id);
                row.find(".bell-details__thumbnail-a").attr("href", notification.data.reasonUserUrl);
                row.find("img").attr("src", notification.data.reasonUserThumbnailUrl);
                row.find(".bell-details__comment-reply").html(
                        "ReasonUser replied to your comment".replace("ReasonUser", notification.data.reasonUserHtml)
                );
                row.find(".bell-details__time").html(
                        "<span class='format-systemtimewithseconds'>"
                        + notification.creationTimeString
                        + "</span>"
                );
                row.removeClass("bell-details__proto-row-comment-reply");
                row.click(function() {
                    onClick(notification);
                    return false;
                });
                return row;
            };
            bell.newBlogEntryRow = function (notification) {
                var row = $(".bell-details__proto-row-blog-entry").clone();
                row.addClass("bell-details__row").attr("data-notificationId", notification.id);
                row.find(".bell-details__thumbnail-a").attr("href", notification.data.reasonUserUrl);
                row.find("img").attr("src", notification.data.reasonUserThumbnailUrl);
                row.find(".bell-details__blog-entry").html(
                        "ReasonUser mentioned you in a blog entry".replace("ReasonUser", notification.data.reasonUserHtml)
                );
                row.find(".bell-details__time").html(
                        "<span class='format-systemtimewithseconds'>"
                        + notification.creationTimeString
                        + "</span>"
                );
                row.removeClass("bell-details__proto-row-blog-entry");
                row.click(function() {
                    onClick(notification);
                    return false;
                });
                return row;
            };
            bell.newFriendBlogEntryRow = function (notification) {
                var row = $(".bell-details__proto-row-blog-entry").clone();
                row.addClass("bell-details__row").attr("data-notificationId", notification.id);
                row.find(".bell-details__thumbnail-a").attr("href", notification.data.reasonUserUrl);
                row.find("img").attr("src", notification.data.reasonUserThumbnailUrl);
                row.find(".bell-details__blog-entry").html(
                        "ReasonUser wrote a blog entry".replace("ReasonUser", notification.data.reasonUserHtml)
                );
                row.find(".bell-details__time").html(
                        "<span class='format-systemtimewithseconds'>"
                        + notification.creationTimeString
                        + "</span>"
                );
                row.removeClass("bell-details__proto-row-blog-entry");
                row.click(function() {
                    onClick(notification);
                    return false;
                });
                return row;
            };
            bell.newProposalCommentRow = function (notification) {
                var row = $(".bell-details__proto-row-comment-reply").clone();
                row.addClass("bell-details__row").attr("data-notificationId", notification.id);
                row.find(".bell-details__thumbnail-a").attr("href", notification.data.reasonUserUrl);
                row.find("img").attr("src", notification.data.reasonUserThumbnailUrl);
                row.find(".bell-details__comment-reply").html(
                        "ReasonUser commented on ProposalType Proposal".replace("ReasonUser", notification.data.reasonUserHtml)
                                .replace("ProposalType", "Contest" == notification.data.proposalType ? "contest proposal" : "problem proposal")
                                .replace("Proposal", $("<div/>").text(notification.data.proposalName).html())
                );
                row.find(".bell-details__time").html(
                        "<span class='format-systemtimewithseconds'>"
                        + notification.creationTimeString
                        + "</span>"
                );
                row.removeClass("bell-details__proto-row-comment-reply");
                row.click(function() {
                    onClick(notification);
                    return false;
                });
                return row;
            };

            bell.renderRow = function (notification) {
                var $row = $(".bell-details__row[data-notificationId='" + notification.id + "']");

                if ($bellDetails.css("display") != "block" && notification.read) {
                    $row.hide();
                    return;
                }

                notification.data = JSON.parse(notification.dataJson);

                var reason = notification.data.reasonType + "#" + notification.reasonId;

                var has = false;
                $row.each(function () {
                    has = true;
                });
                if ($(".bell-details__row[data-reason='" + reason + "']").length) {
                    has = true;
                }

                if (!has) {
                    $(".side-bell").css("visibility", "visible");
                    var newRow;
                    if (notification.type == "Comment") {
                        newRow = bell.newCommentRow(notification);
                    } else if (notification.type == "BlogEntry") {
                        newRow = bell.newBlogEntryRow(notification);
                    } else if (notification.type == "CommentReply") {
                        newRow = bell.newCommentReplyRow(notification);
                    } else if (notification.type == "FriendComment") {
                        newRow = bell.newFriendCommentRow(notification);
                    } else if (notification.type == "FriendBlogEntry") {
                        newRow = bell.newFriendBlogEntryRow(notification);
                    } else if (notification.type == "ProposalComment") {
                        newRow = bell.newProposalCommentRow(notification)
                    }
                    if (newRow) {
                        newRow.attr("data-reason", reason);
                        $(".bell-details").prepend(newRow);
                    }
                }
            };

            var $count = $(".header-bell__count, .side-bell__count");
            var $img = $(".header-bell__img");
            var $noNew = $(".bell-details__no-new");

            bell.renewCount = function () {
                Codeforces.reformatTimes();
                var count = 0;
                var counted = {};
                for (var id in bell.notifications)
                    if (bell.notifications.hasOwnProperty(id)) {
                        var notification = bell.notifications[id];
                        if (notification) {
                            var reason = notification.data.reasonType + "#" + notification.reasonId;
                            if (!notification.read && !counted[reason]) {
                                count++;
                                counted[reason] = true;
                            }
                        }
                    }
                if (count > 0) {
                    $count.text(count);
                    $img.addClass("header-bell__img-active");
                    $noNew.hide();
                } else {
                    $count.text("");
                    $img.removeClass("header-bell__img-active");
                    if ($bellDetails.css("display") != "block") {
                        $noNew.show();
                    }
                }
            };

            for (var id in bell.notifications)
                if (bell.notifications.hasOwnProperty(id))
                    bell.renderRow(bell.notifications[id]);

            if (window.eventCatcher) {
                window.eventCatcher.subscribe(Codeforces.getUserChannel(), function(json) {
                    if (json.t === "n") {
                        for (var i in json.d)
                            if (json.d.hasOwnProperty(i)) {
                                var notification = json.d[i];
                                notification.data = JSON.parse(notification.dataJson);
                                bell.notifications[notification.id] = notification;
                                bell.renderRow(notification);
                                bell.renewCount();
                            }
                    }
                });
            }


            $(".header-bell, .side-bell").click(function() {
                if ($bellDetails.css("display") == "none") {
                    for (var id in bell.notifications)
                        if (bell.notifications.hasOwnProperty(id))
                            if (bell.notifications[id].read)
                                bell.renderRow(bell.notifications[id]);
                    bell.renewCount();

                    $bellDetails.css("display", "block");

                    var notificationIds = [];
                    for (id in bell.notifications)
                        if (bell.notifications.hasOwnProperty(id))
                            notificationIds.push(id);

                    setTimeout(function() {
                        if ($bellDetails.css("display") == "block") {
                            $.post("/data/notification", {action: "markAsRead", notificationIds: notificationIds.join(",")}, function(result) {
                                // No operations.
                            }, "json");

                            for (var i in notificationIds) {
                                if (notificationIds.hasOwnProperty(i)) {
                                    bell.notifications[notificationIds[i]].read = true;
                                }
                            }
                            bell.renewCount();
                        }
                    }, 2000);
                } else {
                    var has = false;
                    for (var id in bell.notifications) {
                        if (bell.notifications.hasOwnProperty(id) && !bell.notifications[id].read) {
                            has = true;
                        }
                    }
                    if (!has) {
                        $(".side-bell").css("visibility", "hidden");
                    }
                    $bellDetails.css("display", "none");
                    bell.renewCount();
                }
            });
        }

        bell = new Bell();
        bell.renewCount();
    })
</script>

<div id="header" style="position: relative;">
    <div style="float:left;">
            <a href="https://codeforces.com/"><img style="height: 50px; margin-top: 10px;" title="Make Codeforces, not Coronaforces" alt="Make Codeforces not Coronaforces" src="./social _distance_files/codeforces-vs-coronavirus-65.png"></a>
    </div>
    <div class="lang-chooser">
        <div style="text-align: right;"><div class="header-bell" style="">
    <div class="header-bell__img"><span class="header-bell__count"></span></div>

    <div class="bell-details">
        <div class="bell-details__proto-row-comment">
            <a class="bell-details__thumbnail-a" href="https://codeforces.com/contest/1367/problem/C#"><img src="https://codeforces.com/contest/1367/problem/C"></a>
            <div class="bell-details__comment"></div>
            <div class="bell-details__time"></div>
        </div>
        <div class="bell-details__proto-row-blog-entry">
            <a class="bell-details__thumbnail-a" href="https://codeforces.com/contest/1367/problem/C#"><img src="https://codeforces.com/contest/1367/problem/C"></a>
            <div class="bell-details__blog-entry"></div>
            <div class="bell-details__time"></div>
        </div>
        <div class="bell-details__proto-row-comment-reply">
            <a class="bell-details__thumbnail-a" href="https://codeforces.com/contest/1367/problem/C#"><img src="https://codeforces.com/contest/1367/problem/C"></a>
            <div class="bell-details__comment-reply"></div>
        </div>

        <div class="bell-details__no-new">
            There are no new notifications
        </div>

        <div class="bell-details__recent-link">
            <a href="https://codeforces.com/notifications">History (at most 100 notifications)</a>
        </div>
    </div>
</div><span style="position: relative; bottom: 8px; padding: 0 0.5em;">|</span>
            <a href="https://codeforces.com/contest/1367/problem/C?locale=en"><img src="./social _distance_files/gb.png" title="In English" alt="In English"></a>
            <a href="https://codeforces.com/contest/1367/problem/C?locale=ru"><img src="./social _distance_files/ru.png" title="По-русски" alt="По-русски"></a>
        </div>

        <div>
                        <a href="https://codeforces.com/profile/codingid6">codingid6</a>
                     | 
                        <a href="https://codeforces.com/a64a07dd3e504c652547157932a8bc55/logout">Logout</a>
                    
        </div>



    </div>
    <br style="clear: both;">
</div>
        

    <div class="roundbox menu-box" style="">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
            <div class="roundbox-lb">&nbsp;</div>
            <div class="roundbox-rb">&nbsp;</div>
    <div class="menu-list-container">
    <ul class="menu-list main-menu-list">
                <li class=""><a href="https://codeforces.com/">Home</a></li>
                <li class=""><a href="https://codeforces.com/top">Top</a></li>
                <li class="current"><a href="https://codeforces.com/contests">Contests</a></li>
                <li class=""><a href="https://codeforces.com/gyms">Gym</a></li>
                <li class=""><a href="https://codeforces.com/problemset">Problemset</a></li>
                <li class=""><a href="https://codeforces.com/groups">Groups</a></li>
                <li class=""><a href="https://codeforces.com/ratings">Rating</a></li>
                <li class=""><a href="https://codeforces.com/apiHelp">API</a></li>
                <li class=""><a href="https://codeforces.com/calendar">Calendar</a></li>
                <li class=""><a href="https://codeforces.com/help">Help</a></li>
                <li class=""><a href="https://codeforces.com/10years"><span style="color:#ce2a2a;font-weight:bold;">10 years! <i style="font-size:100%" class="icon-gift"></i></span></a></li>
    </ul>
        <form method="post" action="https://codeforces.com/search"><input type="hidden" name="csrf_token" value="0470df275c4e2aa32a4952cf51b1f26b">
            <input class="search" name="query" data-isplaceholder="true" value="">
        <input type="hidden" name="_tta" value="847"></form>
    <br style="clear: both;">
</div>

    </div>

    <script type="text/javascript">
        $(document).ready(function () {
            $("input.search").focus(function () {
                if ($(this).attr("data-isPlaceholder") === "true") {
                    $(this).val("");
                    $(this).removeAttr("data-isPlaceholder");
                }
            });
        });
    </script>
            <br style="height: 3em; clear: both;">

        <div style="position: relative;">
                        <div id="sidebar">

    <div class="roundbox sidebox" style="">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
        <table class="rtable ">
            <tbody>
                <tr>
                            <th class="left" style="width:100%;"><a style="color: black" href="https://codeforces.com/contest/1367">Codeforces Round #650 (Div. 3)</a></th>
                </tr>
                    <tr>
                                <td class="left " colspan="1"><span class="contest-state-phase">Finished</span></td>
                    </tr>
                    <tr>
                                <td class="left  dark" colspan="1"><span class="contest-state-regular">Practice</span></td>
                    </tr>
                    <tr>
                                <td class="left bottom" colspan="1"><span class="contest-state-regular"><center>
    <span>
            <img class="toggle-favourite add-favourite" title="Add to favourites" alt="Add to favourites" data-type="CONTEST" data-entityid="1367" data-size="24" src="./social _distance_files/star_gray_24.png">
    </span>

    <script type="text/javascript">
        $(document).ready(function () {
            $("img.toggle-favourite").click(function () {
                var size = $(this).attr("data-size");
                var img = $(this);

                var isFavourite = !img.hasClass("remove-favourite");
                var type = img.attr("data-type");
                var entityId = img.attr("data-entityId");

                $.post("/data/favourite",
                        { entityId: entityId, type: type, isFavourite: isFavourite },
                        function(response) {
                            if (response["success"] != "true") {
                                alert(response["message"]);
                            } else {
                                if (img.hasClass("remove-favourite")) {
                                    img.attr("src", "//sta.codeforces.com/s/13917/images/icons/star_gray_" + size + ".png");
                                    img.removeClass("remove-favourite");
                                    img.addClass("add-favourite");
                                } else {
                                    img.attr("src", "//sta.codeforces.com/s/13917/images/icons/star_yellow_" + size + ".png");
                                    img.removeClass("add-favourite");
                                    img.addClass("remove-favourite");
                                }
                            }
                        }, "json"
                );

                return false;
            });
        });
    </script>
</center></span></td>
                    </tr>
            </tbody>
        </table>
    </div>


    <div class="roundbox sidebox" style="">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
        <div class="caption titled">→ Virtual participation
            <div class="top-links">
            </div>
        </div>

<div>
    <div style="margin:1em;font-size:0.8em;">
        Virtual contest is a way to take part in past contest, as close as possible to participation on time. It is supported only ICPC mode for virtual contests.

If you've seen these problems, a virtual contest is not for you - solve these problems in the archive.

If you just want to solve some problem from a contest, a virtual contest is not for you - solve this problem in the archive.

Never use someone else's code, read the tutorials or communicate with other person during a virtual contest.
    </div>

    <div style="text-align:center;margin:1em;">
        <form action="https://codeforces.com/contest/1367/virtual" method="get">
            <input type="submit" name="submit" value="Start virtual contest" style="padding:0 0.5em;">
        </form>
    </div>
</div>
    </div>

    <div class="roundbox sidebox" style="">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
        <div class="caption titled">→ Practice
            <div class="top-links">
            </div>
        </div>
<div>
    <div style="margin:1em;font-size:0.8em;">
        You are registered for practice. You can solve problems unofficially. Results can be found in the contest status and in the bottom of standings.
    </div>
</div>
    </div>

    <script type="text/javascript">
        $(document).ready(function () {
        });
    </script>

    <div class="roundbox sidebox" style="">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
        <div class="caption titled">→ Clone Contest to Mashup
            <div class="top-links">
            </div>
        </div>
        <div style="margin:1em;">
            <div style="font-size: 1.1rem;">
                <p style="padding-bottom: 1em;">
                    You can clone this contest to a mashup.
                </p>
            </div>
            <div style="text-align: center;">
                <form action="https://codeforces.com/mashup/new" method="get">
                    <input type="hidden" name="isCloneContest" value="true">
                    <input type="hidden" name="contestDuration" value="120">
                    <input type="hidden" name="parentContestIdAndName" value="1367 - Codeforces Round #650 (Div. 3)">
                    <input style="padding: 0 1em;" type="submit" value="Clone Contest">
                </form>
            </div>
        </div>
    </div>

<style type="text/css">
    .submitForm .field {
        font-size: 1.1rem;
        width: 3em !important;
        padding-right: 1em;
    }

    .submitForm input, .submitForm select {
        font-size: 1.1rem;
        width: 17em;
    }
</style>
    <div class="roundbox sidebox" style="">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
        <div class="caption titled">→ Submit?
            <div class="top-links">
            </div>
        </div>
<div>
    <form method="post" action="https://codeforces.com/contest/1367/problem/C?csrf_token=0470df275c4e2aa32a4952cf51b1f26b" enctype="multipart/form-data" class="submitForm"><input type="hidden" name="csrf_token" value="0470df275c4e2aa32a4952cf51b1f26b">
        <input type="hidden" name="ftaa" value="">
        <input type="hidden" name="bfaa" value="">
        <input type="hidden" name="action" value="submitSolutionFormSubmitted">
        <input type="hidden" name="submittedProblemIndex" value="C">
        <input type="hidden" name="source" value="">

        <table class="table-form" style="width:90%;">
            <tbody><tr>
                <td class="field">Language:</td>
                <td>
                    <select name="programTypeId">
                        <option value="43">GNU GCC C11 5.1.0</option>
                        <option value="52">Clang++17 Diagnostics</option>
                        <option value="42">GNU G++11 5.1.0</option>
                        <option value="50">GNU G++14 6.4.0</option>
                        <option value="54" selected="selected">GNU G++17 7.3.0</option>
                        <option value="2">Microsoft Visual C++ 2010</option>
                        <option value="59">Microsoft Visual C++ 2017</option>
                        <option value="61">GNU G++17 9.2.0 (64 bit, msys 2)</option>
                        <option value="9">C# Mono 6.8</option>
                        <option value="28">D DMD32 v2.091.0</option>
                        <option value="32">Go 1.14</option>
                        <option value="12">Haskell GHC 8.10.1</option>
                        <option value="60">Java 11.0.6</option>
                        <option value="36">Java 1.8.0_241</option>
                        <option value="48">Kotlin 1.3.70</option>
                        <option value="19">OCaml 4.02.1</option>
                        <option value="3">Delphi 7</option>
                        <option value="4">Free Pascal 3.0.2</option>
                        <option value="51">PascalABC.NET 3.4.2</option>
                        <option value="13">Perl 5.20.1</option>
                        <option value="6">PHP 7.2.13</option>
                        <option value="7">Python 2.7.15</option>
                        <option value="31">Python 3.7.2</option>
                        <option value="40">PyPy 2.7 (7.2.0)</option>
                        <option value="41">PyPy 3.6 (7.2.0)</option>
                        <option value="8">Ruby 2.0.0p645</option>
                        <option value="49">Rust 1.42.0</option>
                        <option value="20">Scala 2.12.8</option>
                        <option value="34">JavaScript V8 4.8.0</option>
                        <option value="55">Node.js 12.6.3</option>
                    </select>
                </td>
            </tr>
            <tr style="padding: 0; margin: 0; height: 0.5rem;line-height: 1rem;">
                <td style="padding: 0; margin: 0; height: 0.5rem;"></td>
                <td style="padding: 0; margin: 0; height: 0.5rem;">
                    <span class="programTypeNotice notice small" style="position: relative; bottom:7px;"></span>
                </td>
            </tr>

            <tr>
                <td class="field">Choose file:</td>
                <td>
                    <input name="sourceFile" type="file" value="">
                </td>
            </tr>

            <tr>
                <td colspan="2">
                    <div style="text-align: center;">



                        <div style="position: relative; display: inline-block;">
                            <input style="width:10em;" class="submit" type="submit" value="Submit">
                            <img class="ajax-loading-gif" style="display:none; position: absolute; right:-24px; bottom:0;" src="./social _distance_files/ajax-loading-24x24.gif">
                        </div>
                    </div>
                </td>
            </tr>
        </tbody></table>
    <input type="hidden" name="_tta" value="847"></form>
</div>
    </div>

        <script type="text/javascript">
            $(function() {
                window._ftaa = "22vt6qjjkrouap7vrq";
            })
        </script>

        <script type="text/javascript">
            $(function() {
                window._bfaa = "2ebd901d9e347c8c9c0f7f154ad009ca";
            });
        </script>

<script>
    $(function () {
        function adjustNotice(programTypeId) {
            var $programTypeNotice = $(".programTypeNotice");
            $programTypeNotice.text("");
                    if (programTypeId === 7) {
                        $programTypeNotice.text("Almost always, if you send a solution on PyPy, it works much faster");
                    }
                    if (programTypeId === 31) {
                        $programTypeNotice.text("Almost always, if you send a solution on PyPy, it works much faster");
                    }
        }

                adjustNotice(54);


        $("select[name='programTypeId']").change(function () {
            adjustNotice(parseInt($(this).val()));
        });

        $(".submit-form, .submitForm").submitOnce(function () {
            var form = $(this);
            var $ftaa = form.find("input[name='ftaa']");
            var $bfaa = form.find("input[name='bfaa']");

            if (window._ftaa && window._bfaa) {
                $ftaa.val(window._ftaa);
                $bfaa.val(window._bfaa);
            }

            if (form.attr("enctype") === "multipart/form-data") {
                var sourceFiles = form.find(".table-form input[name=sourceFile]");

                if (sourceFiles.length === 1 && sourceFiles[0].files && sourceFiles[0].files.length === 0) {
                    form.removeAttr("enctype");
                }
            }

            return true;
        });
    });
</script>


    <div class="roundbox sidebox" style="">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
        <div class="caption titled">→ Problem tags
            <div class="top-links">
            </div>
        </div>
<div style="padding: 0.5em;">
    <div class="roundbox " style="margin:2px; padding:0 3px 2px 3px; background-color:#f0f0f0;float:left;">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
            <div class="roundbox-lb">&nbsp;</div>
            <div class="roundbox-rb">&nbsp;</div>
<span class="tag-box" style="font-size:1.2rem;" title="Constructive algorithms">
    constructive algorithms
</span>
    </div>
    <div class="roundbox " style="margin:2px; padding:0 3px 2px 3px; background-color:#f0f0f0;float:left;">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
            <div class="roundbox-lb">&nbsp;</div>
            <div class="roundbox-rb">&nbsp;</div>
<span class="tag-box" style="font-size:1.2rem;" title="Greedy algorithms">
    greedy
</span>
    </div>
    <div class="roundbox " style="margin:2px; padding:0 3px 2px 3px; background-color:#f0f0f0;float:left;">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
            <div class="roundbox-lb">&nbsp;</div>
            <div class="roundbox-rb">&nbsp;</div>
<span class="tag-box" style="font-size:1.2rem;" title="Mathematics including integration, differential equations, etc">
    math
</span>
    </div>
    <div class="roundbox " style="margin:2px; padding:0 3px 2px 3px; background-color:#f0f0f0;float:left;">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
            <div class="roundbox-lb">&nbsp;</div>
            <div class="roundbox-rb">&nbsp;</div>
<span class="tag-box" style="font-size:1.2rem;" title="Difficulty">
    *1300
</span>
    </div>
    <div style="clear:both;text-align:right;font-size:1.1rem;">
            <span title="Problem should be solved" class="notice">No tag edit access</span>
    </div>
</div>
    </div>

<form id="addTagForm" action="https://codeforces.com/data/problemTags" method="post" style="display:none;"><input type="hidden" name="csrf_token" value="0470df275c4e2aa32a4952cf51b1f26b">
    <input name="action" type="hidden" value="addTag">
    <input name="problemId" type="hidden" value="650995">
    <input name="tagName" type="hidden" value="">
<input type="hidden" name="_tta" value="847"></form>

<form id="removeTagForm" action="https://codeforces.com/data/problemTags" method="post" style="display:none;"><input type="hidden" name="csrf_token" value="0470df275c4e2aa32a4952cf51b1f26b">
    <input name="action" type="hidden" value="removeTag">
    <input name="problemId" type="hidden" value="650995">
    <input name="tagName" type="hidden" value="">
<input type="hidden" name="_tta" value="847"></form>

<script type="text/javascript">
    $(".tag-box img").click(function () {
        var tagName = $(this).attr("value");
        Codeforces.confirm("Are you sure you want to remove this tag?", function () {
            $("#removeTagForm input[name=tagName]").val(tagName);
            $("#removeTagForm").submit();
        }, function () {
        }, "Yes", "No");
    });

    $("#addTagLink").click(function () {
        $(this).hide();
        $("#addTagLabel").show();
        return false;
    });

    $("#addTagSelect").change(function () {
        var tagName = $(this).val();
        if (tagName === "") {
            $("#addTagLabel").hide();
            $("#addTagLink").show();
        } else {
            $("#addTagForm input[name=tagName]").val(tagName);
            $("#addTagForm").submit();
        }
    });
</script>

<style type="text/css">
#new-resource-form tr td {
padding-top: 0.5em;
}
#new-resource-form input:not([type="submit"]) {
font-size: 0.8em;
}
#new-resource-form select {
font-size: 0.8em;
}
</style>
<div class="roundbox sidebox sidebar-menu" style="">
<div class="roundbox-lt">&nbsp;</div>
<div class="roundbox-rt">&nbsp;</div>
<div class="caption titled">→ Contest materials
<div class="top-links">
</div>
</div>
<ul>
<li>
<span>
<a href="https://codeforces.com/blog/entry/78866" title="Codeforces Round #650 (Div. 3)" target="_blank">Announcement</a>
</span>
<span style="float: right;">
<img class="delete-resource-link" resourceids="11161:11162" resourcename="Announcement" resourcemanual="true" src="./social _distance_files/close-10x10.png" style="position: relative;bottom: -1px;left: 1px;cursor: pointer;">
</span>
<div style="clear: both;"></div>
</li>
<li>
<span>
<a href="https://codeforces.com/blog/entry/78864" title="Codeforces Round #650 (Div. 3) Editorial" target="_blank">Tutorial</a>
</span>
<span style="float: right;">
<img class="delete-resource-link" resourceids="11159:11160" resourcename="Tutorial" resourcemanual="true" src="./social _distance_files/close-10x10.png" style="position: relative;bottom: -1px;left: 1px;cursor: pointer;">
</span>
<div style="clear: both;"></div>
</li>
</ul>
</div></div>
                        <div id="pageContent" class="content-with-sidebar">
                    <div class="second-level-menu">
<ul class="second-level-menu-list"><li class="backLava" style="position: absolute; display: block; margin: 0px; padding: 0px; left: 0px; top: 0px; width: 63px; height: 20px; overflow: hidden;"><div class="leftLava"></div><div class="bottomLava"></div><div class="cornerLava"></div></li>
        <li class="current selectedLava"><a href="https://codeforces.com/contest/1367">Problems</a></li>
        <li><a href="https://codeforces.com/contest/1367/submit">Submit Code</a></li>
        <li><a href="https://codeforces.com/contest/1367/my">My Submissions</a></li>
        <li><a href="https://codeforces.com/contest/1367/status">Status</a></li>
        <li><a href="https://codeforces.com/contest/1367/hacks">Hacks</a></li>
        <li><a href="https://codeforces.com/contest/1367/standings">Standings</a></li>
        <li><a href="https://codeforces.com/contest/1367/customtest">Custom Invocation</a></li>
</ul>
</div>

    <style>
        .input-output-copier {
            font-size: 1.2rem;
            float: right;
            color: #888 !important;
            cursor: pointer;
            border: 1px solid rgb(185, 185, 185);
            padding: 3px;
            margin: 1px;
            line-height: 1.1rem;
            text-transform: none;
        }

        .input-output-copier:hover {
            background-color: #def;
        }

        .test-explanation textarea {
            width: 100%;
            height: 1.5em;
        }

        .pending-submission-message {
            color: darkorange !important;
        }
    </style>

<div class="problemindexholder" problemindex="C">
        <div class="ttypography"><div class="problem-statement"><div class="header"><div class="title">C. Social Distance</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file"><div class="property-title">input</div>standard input</div><div class="output-file"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp and his friends want to visit a new restaurant. The restaurant has <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-1-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;n&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-1" style="width: 0.764em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.588em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.525em, 1000.59em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-2"><span class="mi" id="MathJax-Span-3" style="font-family: MathJax_Math-italic;">n</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.718em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></span></span><script type="math/tex" id="MathJax-Element-1">n</script> tables arranged along a straight line. People are already sitting at some tables. The tables are numbered from <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-2-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-4" style="width: 0.647em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.53em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.35em, 1000.47em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-5"><span class="mn" id="MathJax-Span-6" style="font-family: MathJax_Main;">1</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.932em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn></math></span></span><script type="math/tex" id="MathJax-Element-2">1</script> to <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-3-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;n&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-7" style="width: 0.764em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.588em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.525em, 1000.59em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-8"><span class="mi" id="MathJax-Span-9" style="font-family: MathJax_Math-italic;">n</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.718em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></span></span><script type="math/tex" id="MathJax-Element-3">n</script> in the order from left to right. The state of the restaurant is described by a string of length <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-4-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;n&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-10" style="width: 0.764em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.588em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.525em, 1000.59em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-11"><span class="mi" id="MathJax-Span-12" style="font-family: MathJax_Math-italic;">n</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.718em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></span></span><script type="math/tex" id="MathJax-Element-4">n</script> which contains characters "<span class="tex-font-style-tt">1</span>" (the table is occupied) and "<span class="tex-font-style-tt">0</span>" (the table is empty).</p><p>Restaurant rules prohibit people to sit at a distance of <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-5-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;k&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-13" style="width: 0.647em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.53em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.291em, 1000.53em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-14"><span class="mi" id="MathJax-Span-15" style="font-family: MathJax_Math-italic;">k</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 1.004em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math></span></span><script type="math/tex" id="MathJax-Element-5">k</script> or less from each other. That is, if a person sits at the table number <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-6-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;i&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-16" style="width: 0.471em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.354em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.35em, 1000.3em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-17"><span class="mi" id="MathJax-Span-18" style="font-family: MathJax_Math-italic;">i</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.932em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math></span></span><script type="math/tex" id="MathJax-Element-6">i</script>, then all tables with numbers from <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-7-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;i&lt;/mi&gt;&lt;mo&gt;&amp;#x2212;&lt;/mo&gt;&lt;mi&gt;k&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-19" style="width: 2.579em; display: inline-block;"><span style="display: inline-block; position: relative; width: 2.111em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.291em, 1002.11em, 2.403em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-20"><span class="mi" id="MathJax-Span-21" style="font-family: MathJax_Math-italic;">i</span><span class="mo" id="MathJax-Span-22" style="font-family: MathJax_Main; padding-left: 0.237em;">−</span><span class="mi" id="MathJax-Span-23" style="font-family: MathJax_Math-italic; padding-left: 0.237em;">k</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.139em; border-left: 0px solid; width: 0px; height: 1.075em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi><mo>−</mo><mi>k</mi></math></span></span><script type="math/tex" id="MathJax-Element-7">i-k</script> to <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-8-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;i&lt;/mi&gt;&lt;mo&gt;+&lt;/mo&gt;&lt;mi&gt;k&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-24" style="width: 2.579em; display: inline-block;"><span style="display: inline-block; position: relative; width: 2.111em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.291em, 1002.11em, 2.403em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-25"><span class="mi" id="MathJax-Span-26" style="font-family: MathJax_Math-italic;">i</span><span class="mo" id="MathJax-Span-27" style="font-family: MathJax_Main; padding-left: 0.237em;">+</span><span class="mi" id="MathJax-Span-28" style="font-family: MathJax_Math-italic; padding-left: 0.237em;">k</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.139em; border-left: 0px solid; width: 0px; height: 1.075em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi><mo>+</mo><mi>k</mi></math></span></span><script type="math/tex" id="MathJax-Element-8">i+k</script> (except for the <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-9-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;i&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-29" style="width: 0.471em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.354em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.35em, 1000.3em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-30"><span class="mi" id="MathJax-Span-31" style="font-family: MathJax_Math-italic;">i</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.932em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>i</mi></math></span></span><script type="math/tex" id="MathJax-Element-9">i</script>-th) should be free. In other words, the absolute difference of the numbers of any two occupied tables must be strictly greater than <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-10-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;k&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-32" style="width: 0.647em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.53em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.291em, 1000.53em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-33"><span class="mi" id="MathJax-Span-34" style="font-family: MathJax_Math-italic;">k</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 1.004em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math></span></span><script type="math/tex" id="MathJax-Element-10">k</script>.</p><p>For example, if <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-11-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;n&lt;/mi&gt;&lt;mo&gt;=&lt;/mo&gt;&lt;mn&gt;8&lt;/mn&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-35" style="width: 3.047em; display: inline-block;"><span style="display: inline-block; position: relative; width: 2.462em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.35em, 1002.4em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-36"><span class="mi" id="MathJax-Span-37" style="font-family: MathJax_Math-italic;">n</span><span class="mo" id="MathJax-Span-38" style="font-family: MathJax_Main; padding-left: 0.296em;">=</span><span class="mn" id="MathJax-Span-39" style="font-family: MathJax_Main; padding-left: 0.296em;">8</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 1.004em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi><mo>=</mo><mn>8</mn></math></span></span><script type="math/tex" id="MathJax-Element-11">n=8</script> and <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-12-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;k&lt;/mi&gt;&lt;mo&gt;=&lt;/mo&gt;&lt;mn&gt;2&lt;/mn&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-40" style="width: 2.93em; display: inline-block;"><span style="display: inline-block; position: relative; width: 2.403em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.291em, 1002.35em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-41"><span class="mi" id="MathJax-Span-42" style="font-family: MathJax_Math-italic;">k</span><span class="mo" id="MathJax-Span-43" style="font-family: MathJax_Main; padding-left: 0.296em;">=</span><span class="mn" id="MathJax-Span-44" style="font-family: MathJax_Main; padding-left: 0.296em;">2</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 1.004em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi><mo>=</mo><mn>2</mn></math></span></span><script type="math/tex" id="MathJax-Element-12">k=2</script>, then:</p><ul> <li> strings "<span class="tex-font-style-tt">10010001</span>", "<span class="tex-font-style-tt">10000010</span>", "<span class="tex-font-style-tt">00000000</span>", "<span class="tex-font-style-tt">00100000</span>" satisfy the rules of the restaurant; </li><li> strings "<span class="tex-font-style-tt">10100100</span>", "<span class="tex-font-style-tt">10011001</span>", "<span class="tex-font-style-tt">11111111</span>" do not satisfy to the rules of the restaurant, since each of them has a pair of "<span class="tex-font-style-tt">1</span>" with a distance less than or equal to <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-13-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;k&lt;/mi&gt;&lt;mo&gt;=&lt;/mo&gt;&lt;mn&gt;2&lt;/mn&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-45" style="width: 2.93em; display: inline-block;"><span style="display: inline-block; position: relative; width: 2.403em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.291em, 1002.35em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-46"><span class="mi" id="MathJax-Span-47" style="font-family: MathJax_Math-italic;">k</span><span class="mo" id="MathJax-Span-48" style="font-family: MathJax_Main; padding-left: 0.296em;">=</span><span class="mn" id="MathJax-Span-49" style="font-family: MathJax_Main; padding-left: 0.296em;">2</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 1.004em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi><mo>=</mo><mn>2</mn></math></span></span><script type="math/tex" id="MathJax-Element-13">k=2</script>. </li></ul><p>In particular, if the state of the restaurant is described by a string without "<span class="tex-font-style-tt">1</span>" or a string with one "<span class="tex-font-style-tt">1</span>", then the requirement of the restaurant is satisfied.</p><p>You are given a binary string <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-14-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;s&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-50" style="width: 0.588em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.471em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.525em, 1000.41em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-51"><span class="mi" id="MathJax-Span-52" style="font-family: MathJax_Math-italic;">s</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.718em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math></span></span><script type="math/tex" id="MathJax-Element-14">s</script> that describes the current state of the restaurant. It is guaranteed that the rules of the restaurant are satisfied for the string <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-15-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;s&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-53" style="width: 0.588em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.471em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.525em, 1000.41em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-54"><span class="mi" id="MathJax-Span-55" style="font-family: MathJax_Math-italic;">s</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.718em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math></span></span><script type="math/tex" id="MathJax-Element-15">s</script>.</p><p>Find the maximum number of free tables that you can occupy so as not to violate the rules of the restaurant. Formally, what is the maximum number of "<span class="tex-font-style-tt">0</span>" that can be replaced by "<span class="tex-font-style-tt">1</span>" such that the requirement will still be satisfied?</p><p>For example, if <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-16-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;n&lt;/mi&gt;&lt;mo&gt;=&lt;/mo&gt;&lt;mn&gt;6&lt;/mn&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-56" style="width: 3.047em; display: inline-block;"><span style="display: inline-block; position: relative; width: 2.462em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.35em, 1002.4em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-57"><span class="mi" id="MathJax-Span-58" style="font-family: MathJax_Math-italic;">n</span><span class="mo" id="MathJax-Span-59" style="font-family: MathJax_Main; padding-left: 0.296em;">=</span><span class="mn" id="MathJax-Span-60" style="font-family: MathJax_Main; padding-left: 0.296em;">6</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 1.004em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi><mo>=</mo><mn>6</mn></math></span></span><script type="math/tex" id="MathJax-Element-16">n=6</script>, <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-17-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;k&lt;/mi&gt;&lt;mo&gt;=&lt;/mo&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-61" style="width: 2.93em; display: inline-block;"><span style="display: inline-block; position: relative; width: 2.403em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.291em, 1002.35em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-62"><span class="mi" id="MathJax-Span-63" style="font-family: MathJax_Math-italic;">k</span><span class="mo" id="MathJax-Span-64" style="font-family: MathJax_Main; padding-left: 0.296em;">=</span><span class="mn" id="MathJax-Span-65" style="font-family: MathJax_Main; padding-left: 0.296em;">1</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 1.004em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi><mo>=</mo><mn>1</mn></math></span></span><script type="math/tex" id="MathJax-Element-17">k=1</script>, <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-18-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;s&lt;/mi&gt;&lt;mo&gt;=&lt;/mo&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-66" style="width: 1.876em; display: inline-block;"><span style="display: inline-block; position: relative; width: 1.525em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.525em, 1001.47em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-67"><span class="mi" id="MathJax-Span-68" style="font-family: MathJax_Math-italic;">s</span><span class="mo" id="MathJax-Span-69" style="font-family: MathJax_Main; padding-left: 0.296em;">=</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.718em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi><mo>=</mo></math></span></span><script type="math/tex" id="MathJax-Element-18">s=</script>&nbsp;"<span class="tex-font-style-tt">100010</span>", then the answer to the problem will be <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-19-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-70" style="width: 0.647em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.53em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.35em, 1000.47em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-71"><span class="mn" id="MathJax-Span-72" style="font-family: MathJax_Main;">1</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.932em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn></math></span></span><script type="math/tex" id="MathJax-Element-19">1</script>, since only the table at position <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-20-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mn&gt;3&lt;/mn&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-73" style="width: 0.647em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.53em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.35em, 1000.47em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-74"><span class="mn" id="MathJax-Span-75" style="font-family: MathJax_Main;">3</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 1.004em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>3</mn></math></span></span><script type="math/tex" id="MathJax-Element-20">3</script> can be occupied such that the rules are still satisfied.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-21-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;t&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-76" style="width: 0.471em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.354em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.35em, 1000.3em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-77"><span class="mi" id="MathJax-Span-78" style="font-family: MathJax_Math-italic;">t</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.932em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>t</mi></math></span></span><script type="math/tex" id="MathJax-Element-21">t</script> (<span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-22-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mi&gt;t&lt;/mi&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;msup&gt;&lt;mn&gt;10&lt;/mn&gt;&lt;mn&gt;4&lt;/mn&gt;&lt;/msup&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-79" style="width: 6.15em; display: inline-block;"><span style="display: inline-block; position: relative; width: 5.038em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.115em, 1005.04em, 2.462em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-80"><span class="mn" id="MathJax-Span-81" style="font-family: MathJax_Main;">1</span><span class="mo" id="MathJax-Span-82" style="font-family: MathJax_Main; padding-left: 0.296em;">≤</span><span class="mi" id="MathJax-Span-83" style="font-family: MathJax_Math-italic; padding-left: 0.296em;">t</span><span class="mo" id="MathJax-Span-84" style="font-family: MathJax_Main; padding-left: 0.296em;">≤</span><span class="msubsup" id="MathJax-Span-85" style="padding-left: 0.296em;"><span style="display: inline-block; position: relative; width: 1.408em; height: 0px;"><span style="position: absolute; clip: rect(3.165em, 1000.94em, 4.16em, -999.997em); top: -3.978em; left: 0em;"><span class="mn" id="MathJax-Span-86" style="font-family: MathJax_Main;">10</span><span style="display: inline-block; width: 0px; height: 3.984em;"></span></span><span style="position: absolute; top: -4.388em; left: 0.998em;"><span class="mn" id="MathJax-Span-87" style="font-size: 70.7%; font-family: MathJax_Main;">4</span><span style="display: inline-block; width: 0px; height: 3.984em;"></span></span></span></span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.211em; border-left: 0px solid; width: 0px; height: 1.361em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>t</mi><mo>≤</mo><msup><mn>10</mn><mn>4</mn></msup></math></span></span><script type="math/tex" id="MathJax-Element-22">1 \le t \le 10^4</script>)&nbsp;— the number of test cases in the test. Then <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-23-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;t&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-88" style="width: 0.471em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.354em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.35em, 1000.3em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-89"><span class="mi" id="MathJax-Span-90" style="font-family: MathJax_Math-italic;">t</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.932em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>t</mi></math></span></span><script type="math/tex" id="MathJax-Element-23">t</script> test cases follow.</p><p>Each test case starts with a line containing two integers <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-24-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;n&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-91" style="width: 0.764em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.588em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.525em, 1000.59em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-92"><span class="mi" id="MathJax-Span-93" style="font-family: MathJax_Math-italic;">n</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.718em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></span></span><script type="math/tex" id="MathJax-Element-24">n</script> and <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-25-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;k&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-94" style="width: 0.647em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.53em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.291em, 1000.53em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-95"><span class="mi" id="MathJax-Span-96" style="font-family: MathJax_Math-italic;">k</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 1.004em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math></span></span><script type="math/tex" id="MathJax-Element-25">k</script> (<span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-26-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mn&gt;1&lt;/mn&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mi&gt;k&lt;/mi&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mi&gt;n&lt;/mi&gt;&lt;mo&gt;&amp;#x2264;&lt;/mo&gt;&lt;mn&gt;2&lt;/mn&gt;&lt;mo&gt;&amp;#x22C5;&lt;/mo&gt;&lt;msup&gt;&lt;mn&gt;10&lt;/mn&gt;&lt;mn&gt;5&lt;/mn&gt;&lt;/msup&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-97" style="width: 10.249em; display: inline-block;"><span style="display: inline-block; position: relative; width: 8.375em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.115em, 1008.38em, 2.462em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-98"><span class="mn" id="MathJax-Span-99" style="font-family: MathJax_Main;">1</span><span class="mo" id="MathJax-Span-100" style="font-family: MathJax_Main; padding-left: 0.296em;">≤</span><span class="mi" id="MathJax-Span-101" style="font-family: MathJax_Math-italic; padding-left: 0.296em;">k</span><span class="mo" id="MathJax-Span-102" style="font-family: MathJax_Main; padding-left: 0.296em;">≤</span><span class="mi" id="MathJax-Span-103" style="font-family: MathJax_Math-italic; padding-left: 0.296em;">n</span><span class="mo" id="MathJax-Span-104" style="font-family: MathJax_Main; padding-left: 0.296em;">≤</span><span class="mn" id="MathJax-Span-105" style="font-family: MathJax_Main; padding-left: 0.296em;">2</span><span class="mo" id="MathJax-Span-106" style="font-family: MathJax_Main; padding-left: 0.237em;">⋅</span><span class="msubsup" id="MathJax-Span-107" style="padding-left: 0.237em;"><span style="display: inline-block; position: relative; width: 1.408em; height: 0px;"><span style="position: absolute; clip: rect(3.165em, 1000.94em, 4.16em, -999.997em); top: -3.978em; left: 0em;"><span class="mn" id="MathJax-Span-108" style="font-family: MathJax_Main;">10</span><span style="display: inline-block; width: 0px; height: 3.984em;"></span></span><span style="position: absolute; top: -4.388em; left: 0.998em;"><span class="mn" id="MathJax-Span-109" style="font-size: 70.7%; font-family: MathJax_Main;">5</span><span style="display: inline-block; width: 0px; height: 3.984em;"></span></span></span></span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.211em; border-left: 0px solid; width: 0px; height: 1.361em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>k</mi><mo>≤</mo><mi>n</mi><mo>≤</mo><mn>2</mn><mo>⋅</mo><msup><mn>10</mn><mn>5</mn></msup></math></span></span><script type="math/tex" id="MathJax-Element-26">1 \le k \le n \le 2\cdot 10^5</script>)&nbsp;— the number of tables in the restaurant and the minimum allowed distance between two people.</p><p>The second line of each test case contains a binary string <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-27-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;s&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-110" style="width: 0.588em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.471em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.525em, 1000.41em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-111"><span class="mi" id="MathJax-Span-112" style="font-family: MathJax_Math-italic;">s</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.718em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>s</mi></math></span></span><script type="math/tex" id="MathJax-Element-27">s</script> of length <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-28-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;n&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-113" style="width: 0.764em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.588em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.525em, 1000.59em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-114"><span class="mi" id="MathJax-Span-115" style="font-family: MathJax_Math-italic;">n</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.718em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></span></span><script type="math/tex" id="MathJax-Element-28">n</script> consisting of "<span class="tex-font-style-tt">0</span>" and "<span class="tex-font-style-tt">1</span>"&nbsp;— a description of the free and occupied tables in the restaurant. The given string satisfy to the rules of the restaurant&nbsp;— the difference between indices of any two "<span class="tex-font-style-tt">1</span>" is more than <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-29-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;k&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-116" style="width: 0.647em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.53em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.291em, 1000.53em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-117"><span class="mi" id="MathJax-Span-118" style="font-family: MathJax_Math-italic;">k</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 1.004em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>k</mi></math></span></span><script type="math/tex" id="MathJax-Element-29">k</script>.</p><p>The sum of <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-30-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mi&gt;n&lt;/mi&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-119" style="width: 0.764em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.588em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.525em, 1000.59em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-120"><span class="mi" id="MathJax-Span-121" style="font-family: MathJax_Math-italic;">n</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.718em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>n</mi></math></span></span><script type="math/tex" id="MathJax-Element-30">n</script> for all test cases in one test does not exceed <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-31-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mn&gt;2&lt;/mn&gt;&lt;mo&gt;&amp;#x22C5;&lt;/mo&gt;&lt;msup&gt;&lt;mn&gt;10&lt;/mn&gt;&lt;mn&gt;5&lt;/mn&gt;&lt;/msup&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-122" style="width: 3.282em; display: inline-block;"><span style="display: inline-block; position: relative; width: 2.696em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.115em, 1002.7em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-123"><span class="mn" id="MathJax-Span-124" style="font-family: MathJax_Main;">2</span><span class="mo" id="MathJax-Span-125" style="font-family: MathJax_Main; padding-left: 0.237em;">⋅</span><span class="msubsup" id="MathJax-Span-126" style="padding-left: 0.237em;"><span style="display: inline-block; position: relative; width: 1.408em; height: 0px;"><span style="position: absolute; clip: rect(3.165em, 1000.94em, 4.16em, -999.997em); top: -3.978em; left: 0em;"><span class="mn" id="MathJax-Span-127" style="font-family: MathJax_Main;">10</span><span style="display: inline-block; width: 0px; height: 3.984em;"></span></span><span style="position: absolute; top: -4.388em; left: 0.998em;"><span class="mn" id="MathJax-Span-128" style="font-size: 70.7%; font-family: MathJax_Main;">5</span><span style="display: inline-block; width: 0px; height: 3.984em;"></span></span></span></span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 1.218em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn><mo>⋅</mo><msup><mn>10</mn><mn>5</mn></msup></math></span></span><script type="math/tex" id="MathJax-Element-31">2\cdot 10^5</script>.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case output one integer&nbsp;— the number of tables that you can occupy so as not to violate the rules of the restaurant. If additional tables cannot be taken, then, obviously, you need to output <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-32-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mn&gt;0&lt;/mn&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-129" style="width: 0.647em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.53em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.35em, 1000.47em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-130"><span class="mn" id="MathJax-Span-131" style="font-family: MathJax_Main;">0</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 1.004em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>0</mn></math></span></span><script type="math/tex" id="MathJax-Element-32">0</script>.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007684718179719183" id="id0005809120843369242" class="input-output-copier">Copy</div></div><pre id="id007684718179719183">6
6 1
100010
6 2
000000
5 1
10101
3 1
001
2 2
00
1 1
0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00615524690581672" id="id0044194541984877955" class="input-output-copier">Copy</div></div><pre id="id00615524690581672">1
2
0
1
1
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first test case is explained in the statement.</p><p>In the second test case, the answer is <span class="MathJax_Preview" style="color: inherit;"></span><span class="MathJax" id="MathJax-Element-33-Frame" tabindex="0" data-mathml="&lt;math xmlns=&quot;http://www.w3.org/1998/Math/MathML&quot;&gt;&lt;mn&gt;2&lt;/mn&gt;&lt;/math&gt;" role="presentation" style="position: relative;"><nobr aria-hidden="true"><span class="math" id="MathJax-Span-132" style="width: 0.647em; display: inline-block;"><span style="display: inline-block; position: relative; width: 0.53em; height: 0px; font-size: 122%;"><span style="position: absolute; clip: rect(1.35em, 1000.47em, 2.345em, -999.997em); top: -2.163em; left: 0em;"><span class="mrow" id="MathJax-Span-133"><span class="mn" id="MathJax-Span-134" style="font-family: MathJax_Main;">2</span></span><span style="display: inline-block; width: 0px; height: 2.169em;"></span></span></span><span style="display: inline-block; overflow: hidden; vertical-align: -0.068em; border-left: 0px solid; width: 0px; height: 0.932em;"></span></span></nobr><span class="MJX_Assistive_MathML" role="presentation"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>2</mn></math></span></span><script type="math/tex" id="MathJax-Element-33">2</script>, since you can choose the first and the sixth table.</p><p>In the third test case, you cannot take any free table without violating the rules of the restaurant.</p></div></div><p>  </p></div>
</div>


<script type="text/javascript">
    $(document).ready(function () {
            window.changedTests = new Set();
            console.log("Initialized window.changedTests.");

        function endsWith(string, suffix) {
            return string.indexOf(suffix, string.length - suffix.length) !== -1;
        }

        var inputFileDiv = $("div.input-file");
        var inputFile = inputFileDiv.text();
        var outputFileDiv = $("div.output-file");
        var outputFile = outputFileDiv.text();


        if (!endsWith(inputFile, "standard input")
                && !endsWith(inputFile, "standard input")) {
            inputFileDiv.attr("style", "font-weight: bold");
        }

        if (!endsWith(outputFile, "standard output")
                && !endsWith(outputFile, "standard output")) {
            outputFileDiv.attr("style", "font-weight: bold");
        }

        var titleDiv = $("div.header div.title");



        String.prototype.replaceAll = function (search, replace) {
            return this.split(search).join(replace);
        };

        $(".sample-test .title").each(function () {
            var preId = ("id" + Math.random()).replaceAll(".", "0");
            var cpyId = ("id" + Math.random()).replaceAll(".", "0");

            $(this).parent().find("pre").attr("id", preId);
            var $copy = $("<div title='Copy' data-clipboard-target='#" + preId + "' id='" + cpyId + "' class='input-output-copier'>Copy</div>");
            $(this).append($copy);

            var clipboard = new Clipboard('#' + cpyId, {
                text: function (trigger) {
                    return Codeforces.filterClipboardText(document.querySelector('#' + preId).innerText);
                }
            });

            var isInput = $(this).parent().hasClass("input");

            clipboard.on('success', function (e) {
                if (isInput) {
                    Codeforces.showMessage("The example input has been copied into the clipboard");
                } else {
                    Codeforces.showMessage("The example output has been copied into the clipboard");
                }
                e.clearSelection();
            });
        });

        $(".test-form-item input").change(function () {
            addPendingSubmissionMessage($($(this).closest("form")), "You changed the answer, do not forget to submit it if you want to save the changes");
            var index = $(this).closest(".problemindexholder").attr("problemindex");
            var test = "";
            $(this).closest("form input").each(function() {
                var test_ = $(this).attr("name");
                if (test_ && test_.substring(0, 4) === "test") {
                    test = test_;
                }
            });
            if (index.length > 0 && test.length > 0) {
                var indexTest = index + "::" + test;
                window.changedTests.add(indexTest);
                console.log("Changed " + indexTest + ", size=" + window.changedTests.size);
            }
        });

        $(window).on('beforeunload', function () {
            if (window.changedTests.size > 0) {
                return 'Dialog text here';
            }
        });

        autosize($('.test-explanation textarea'));

    });
</script>

                </div>
        </div>
            <br style="clear: both;">
            <div id="footer">
                <div><a href="https://codeforces.com/">Codeforces</a> (c) Copyright 2010-2020 Mike Mirzayanov</div>
                <div>The only programming contests Web 2.0 platform</div>
                    <div>Server time: Jun/21/2020 20:16:28<sup title="timezone offset" style="font-size:8px;">UTC+5.5</sup> (g2).</div>
                    <div>Desktop version, switch to <a rel="nofollow" class="switchToMobile" href="https://codeforces.com/contest/1367/problem/C?mobile=true">mobile version</a>.</div>
                <div class="smaller"><a href="https://codeforces.com/privacy">Privacy Policy</a></div>

                    <div style="margin-top: 25px;">
                        Supported by
                    </div>
                    <div style="margin-top: 8px; padding-bottom: 20px; position: relative; left: 10px;">
                        <a href="https://telegram.org/"><img style="margin-right: 2em; width: 60px;" src="./social _distance_files/telegram-100x100.png" alt="Telegram" title="Telegram"></a>
                        <a href="http://ifmo.ru/en/"><img style="width: 120px;" src="./social _distance_files/itmo_small_en-logo.png" alt="ИТМО" title="ИТМО"></a>
                    </div>
            </div>
        <script type="text/javascript">
            $(function() {
                $(".switchToMobile").click(function() {
                    Codeforces.redirect(Codeforces.updateUrlParameter(document.location.href, "mobile", "true"));
                    return false;
                });
                $(".switchToDesktop").click(function() {
                    Codeforces.redirect(Codeforces.updateUrlParameter(document.location.href, "mobile", "false"));
                    return false;
                });
            });
        </script>
    <script type="text/javascript">
        $(document).ready(function () {
            if ($(window).width() < 1600) {
                $('.button-up').css('width', '30px').css('line-height', '30px').css('font-size', '20px');
            }

            if ($(window).width() >= 1200) {
                $ (window).scroll (function () {
                    if ($ (this).scrollTop () > 100) {
                        $ ('.button-up').fadeIn();
                    } else {
                        $ ('.button-up').fadeOut();
                    }
                });

                $('.button-up').click(function () {
                    $('body,html').animate({
                        scrollTop: 0
                    }, 500);
                    return false;
                });

                $('.button-up').hover(function () {
                    $(this).animate({
                        'opacity':'1'
                    }).css({'background-color':'#e7ebf0','color':'#6a86a4'});
                }, function () {
                    $(this).animate({
                        'opacity':'0.7'
                    }).css({'background':'none','color':'#d3dbe4'});;
                });
            }
            Codeforces.focusOnError();
        });
    </script>

        <div class="userListsFacebox" style="display:none;">
            <div style="padding: 0.5em; width: 600px; max-height: 200px; overflow-y: auto">
<div class="datatable" style="background-color: #E1E1E1; padding-bottom: 3px;">
            <div class="lt">&nbsp;</div>
            <div class="rt">&nbsp;</div>
            <div class="lb">&nbsp;</div>
            <div class="rb">&nbsp;</div>

            <div style="padding: 4px 0 0 6px;font-size:1.4rem;position:relative;">
                User lists

                <div style="position:absolute;right:0.25em;top:0.35em;">
                    <span style="padding:0;position:relative;bottom:2px;" class="rowCount"></span>

                    <img class="closed" src="./social _distance_files/control.png">

                    <span class="filter" style="display:none;">
                        <img class="opened" src="./social _distance_files/control-270.png">
                        <input style="padding:0 0 0 20px;position:relative;bottom:2px;border:1px solid #aaa;height:17px;font-size:1.3rem;">
                    </span>
                </div>
            </div>
            <div style="background-color: white;margin:0.3em 3px 0 3px;position:relative;">
            <div class="ilt">&nbsp;</div>
            <div class="irt">&nbsp;</div>
            <table class="">
                    <thead>
                    <tr>
                        <th class="top left right">Name</th>
                    </tr>
                    </thead>
                    <tbody>
                    <tr class="no-items visible"><td style="text-align:left;" colspan="32" class="bottom dark left right">No items</td></tr></tbody>
            </table>
            </div>
        </div>
    <script type="text/javascript">
        $(document).ready(function () {
                // Create new ':containsIgnoreCase' selector for search
                jQuery.expr[':'].containsIgnoreCase = function(a, i, m) {
                    return jQuery(a).text().toUpperCase()
                            .indexOf(m[3].toUpperCase()) >= 0;
                };

                if (window.updateDatatableFilter == undefined) {
                    window.updateDatatableFilter = function(i) {
                        var parent = $(i).parent().parent().parent().parent();
                        $("tr.no-items", parent).remove();
                        $("tr", parent).hide().removeClass('visible');
                        var text = $(i).val();
                        if (text) {
                            $("tr" + ":containsIgnoreCase('" + text + "')", parent).show().addClass('visible');
                        } else {
                            parent.find(".rowCount").text("");
                            $("tr", parent).show().addClass('visible');
                        }

                        var found = false;
                        var visibleRowCount = 0;
                        $("tr", parent).each(function () {
                            if (!found) {
                                if ($(this).find("th").size() > 0) {
                                    $(this).show().addClass('visible');
                                    found = true;
                                }
                            }
                            if ($(this).hasClass('visible')) {
                                visibleRowCount++;
                            }
                        });
                        if (text) {
                            parent.find(".rowCount").text("Matches: " + (visibleRowCount - (found ? 1 : 0)));
                        }
                        if (visibleRowCount == (found ? 1 : 0)) {
                            $("<tr class='no-items visible'><td style=\"text-align:left;\"colspan=\"32\">No items<\/td><\/tr>").appendTo($(parent).find('table'));
                        }
                        $(parent).find("tr td").removeClass("dark");
                        $(parent).find("tr.visible:odd td").addClass("dark");
                    }

                    $(".datatable .closed").click(function () {
                        var parent = $(this).parent();
                        $(this).hide();
                        $(".filter", parent).fadeIn(function () {
                            $("input", parent).val("").focus().css("border", "1px solid #aaa");
                        });
                    });

                    $(".datatable .opened").click(function () {
                        var parent = $(this).parent().parent();
                        $(".filter", parent).fadeOut(function () {
                            $(".closed", parent).show();
                            $("input", parent).val("").each(function () {
                                window.updateDatatableFilter(this);
                            });
                        });
                    });

                    $(".datatable .filter input").keyup(function(e) {
                        window.updateDatatableFilter(this);
                        e.preventDefault();
                        e.stopPropagation();
                    });

                    $(".datatable table").each(function () {
                        var found = false;
                        $("tr", this).each(function () {
                            if (!found && $(this).find("th").size() == 0) {
                                found = true;
                            }
                        });
                        if (!found) {
                            $("<tr class='no-items visible'><td style=\"text-align:left;\"colspan=\"32\">No items<\/td><\/tr>").appendTo(this);
                        }
                    });

                    // Applies styles to datatables.
                    $(".datatable").each(function () {
                        $(this).find("tr:first th").addClass("top");
                        $(this).find("tr:last td").addClass("bottom");
                        $(this).find("tr:odd td").addClass("dark");
                        $(this).find("tr td:first-child, tr th:first-child").addClass("left");
                        $(this).find("tr td:last-child, tr th:last-child").addClass("right");
                    });

                    $(".datatable table.tablesorter").each(function () {
                        $(this).bind("sortEnd", function () {
                            $(".datatable").each(function () {
                                $(this).find("th, td")
                                    .removeClass("top").removeClass("bottom")
                                    .removeClass("left").removeClass("right")
                                    .removeClass("dark");
                                $(this).find("tr:first th").addClass("top");
                                $(this).find("tr:last td").addClass("bottom");
                                $(this).find("tr:odd td").addClass("dark");
                                $(this).find("tr td:first-child, tr th:first-child").addClass("left");
                                $(this).find("tr td:last-child, tr th:last-child").addClass("right");
                            });
                        });
                    });
                }
        });
    </script>
            </div>
        </div>
        <script type="application/javascript">
            $(function() {
                $(".userListMarker").click(function() {
                    $.post("/data/lists", {action: "findTouched"}, function(json) {
                        Codeforces.facebox(".userListsFacebox");
                        var tbody = $("#facebox tbody");
                        tbody.empty();
                        for (var i in json) {
                            tbody.append(
                                    $("<tr></tr>").append(
                                            $("<td></td>").attr("data-readKey", json[i].readKey).text(json[i].name)
                                    )
                            );
                        }
                        Codeforces.updateDatatables();
                        tbody.find("td").css("cursor", "pointer").click(function() {
                            document.location = Codeforces.updateUrlParameter(document.location.href, "list", $(this).attr("data-readKey"));
                        });
                    }, "json");
                });
            });
        </script>
</div>
    <script type="application/javascript">
        if ('serviceWorker' in navigator && 'fetch' in window && 'caches' in window) {
            var parser = new UAParser();
            var browserName = parser.getBrowser().name;
            var browserVersion = parser.getBrowser().version;

            var supportedBrowser = false;
            var supportedBrowsers = {
                "Chrome": "76",
                "Firefox": "68",
                // "Edge": "18",
                "Safari": "12.1",
                "Opera": "63",
                "Yandex": "19.9"
            };

            for (var name in supportedBrowsers) {
                if (name === browserName && supportedBrowsers[name] <= browserVersion) {
                    supportedBrowser = true;
                }
            }

            if (supportedBrowser) {
                navigator.serviceWorker.register('/service-worker-13917.js')
                    .then(function (registration) {
                        console.log('Service worker registered');
                    })
                    .catch(function (error) {
                        console.log('Registration failed: ', error);
                    });
            } else {
                navigator.serviceWorker.getRegistrations().then(function(registrations) {
                    for (var i = 0; i < registrations.length; i++) {
                        registrations[i].unregister();
                    }
                });
            }
        }
    </script>


<div id="datepick-div" style="display: none;"></div><div id="cboxOverlay" style="display: none;"></div><div id="colorbox" class="" style="display: none; padding-bottom: 42px; padding-right: 42px;"><div id="cboxWrapper"><div><div id="cboxTopLeft" style="float: left;"></div><div id="cboxTopCenter" style="float: left;"></div><div id="cboxTopRight" style="float: left;"></div></div><div style="clear: left;"><div id="cboxMiddleLeft" style="float: left;"></div><div id="cboxContent" style="float: left;"><div id="cboxLoadedContent" style="width: 0px; height: 0px; overflow: hidden; float: left;"></div><div id="cboxLoadingOverlay" style="float: left;"></div><div id="cboxLoadingGraphic" style="float: left;"></div><div id="cboxTitle" style="float: left;"></div><div id="cboxCurrent" style="float: left;"></div><div id="cboxNext" style="float: left;"></div><div id="cboxPrevious" style="float: left;"></div><div id="cboxSlideshow" style="float: left;"></div><div id="cboxClose" style="float: left;"></div></div><div id="cboxMiddleRight" style="float: left;"></div></div><div style="clear: left;"><div id="cboxBottomLeft" style="float: left;"></div><div id="cboxBottomCenter" style="float: left;"></div><div id="cboxBottomRight" style="float: left;"></div></div></div><div style="position: absolute; width: 9999px; visibility: hidden; display: none;"></div></div><div style="position: absolute; width: 0px; height: 0px; overflow: hidden; padding: 0px; border: 0px; margin: 0px;"><div id="MathJax_Font_Test" style="position: absolute; visibility: hidden; top: 0px; left: 0px; width: auto; min-width: 0px; max-width: none; padding: 0px; border: 0px; margin: 0px; white-space: nowrap; text-align: left; text-indent: 0px; text-transform: none; line-height: normal; letter-spacing: normal; word-spacing: normal; font-size: 40px; font-weight: normal; font-style: normal; font-family: MathJax_Main, sans-serif;"></div></div><div id="fb-root" class=" fb_reset"><div style="position: absolute; top: -10000px; width: 0px; height: 0px;"><div></div></div></div></body></html>