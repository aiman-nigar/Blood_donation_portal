<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<!-- saved from url=(0080)http://www.cprogrammingtutorial.org/cprogram/Write-a-paint-program-in-C/151.html -->
<html xmlns="http://www.w3.org/1999/xhtml" xmlns:og="http://ogp.me/ns#" xmlns:fb="https://www.facebook.com/2008/fbml"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
   <!--<base href="http://www.cprogrammingtutorial.org">--><base href=".">
<title>paint program in C</title>

<link rel="shortcut icon" href="http://www.cprogrammingtutorial.org/images/favicon.ico">
<link rel="canonical" href="http://www.cprogrammingtutorial.org/cprogram/Write-a-paint-program-in-C/151.html">
<meta name="keywords" content="paint program in C,  c programs for paint,   c programming tutorials,  detailed descriptions,  solved c programs,  c tutorials,  ">
<meta name="description" content="paint program in C with steps">
<link rel="publisher" href="https://plus.google.com/u/0/115136591533487646020/about">

<meta property="og:title" content="paint program in C">
<meta property="og:type" content="article">
<meta property="og:image" content="">
<meta property="og:url" content="http://www.cprogrammingtutorial.org/cprogram/Write-a-paint-program-in-C/151.html">
<meta property="og:description" content="paint program in C with steps">
<meta property="article:publisher" content="https://www.facebook.com/pages/C-Programming-Tutorials/1526134754319642">
<meta property="og:site_name" content="Cprogrammingtutorial.org">
<meta property="article:section" content="Uncategorized">

<meta name="twitter:card" content="summary">
<meta name="twitter:title" content="paint program in C">
<meta name="twitter:description" content="paint program in C with steps">
<meta name="twitter:image" content="">
<link href="./p_files/basic.css" rel="stylesheet" type="text/css" media="all">
<!--[if IE 6]>
<link href="default_ie6.css" rel="stylesheet" type="text/css" />
<![endif]-->
<link rel="preload" href="./p_files/f(2).txt" as="script"><script src="./p_files/cb=gapi.loaded_1" async=""></script><script src="./p_files/cb=gapi(1).loaded_0" async=""></script><script src="./p_files/sdk.js.download" async="" crossorigin="anonymous"></script><script src="./p_files/osd.js.download"></script><script src="./p_files/f.txt"></script><script src="./p_files/f(1).txt" id="google_shimpl"></script><script type="text/javascript" src="./p_files/f(2).txt"></script><link rel="preload" href="./p_files/f(3).txt" as="script"><script type="text/javascript" src="./p_files/f(3).txt"></script><style type="text/css">.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q{display:block!important;border:1px solid #cdcfd2!important;background-color:#fff!important;color:#373a3d!important;width:100vw!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-24GeGuJgk9LrMLp7qVvlyz{background:#6a7e89!important;color:#fff!important;padding:10px!important;font-size:18px!important;font-family:sans-serif!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-KVjdulkCFfUZps29EbgAC{background:#f3f6f8!important;border-bottom:1px solid #cdcfd2!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-KVjdulkCFfUZps29EbgAC>*{margin-right:10px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1OeZ2PQ98oAp6Vc5mMc6V5{list-style:none!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-vCwYmWF_l83ScZBrGnRoi,.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1OeZ2PQ98oAp6Vc5mMc6V5{margin:0!important;padding:0!important;width:100%!important;display:block!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-vCwYmWF_l83ScZBrGnRoi:not(:last-child){border-bottom:1px solid #cdcfd2!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1XQZkb-FlHWABUp4_uShaZ{color:inherit!important;cursor:pointer!important;width:100%!important;display:inline-block!important;margin:10px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1XTzMvb2XKitWz0mFLlyyp{margin:5px!important;display:block!important;width:auto!important;white-space:pre!important;overflow-x:scroll!important;background:inherit!important;color:inherit!important;font-family:monospace}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1XTzMvb2XKitWz0mFLlyyp:not(.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-39QUvFFn5B7GMcqMQkOXZ3){display:none!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-295DY3nO0DbJWMsOqmjCli{background:#f5f5f5!important;color:#5a5a5a!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1aQZwu6CUzAf2zUcI7tg0Q .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-295DY3nO0DbJWMsOqmjCli{display:none!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-38EPFyKXMtoP12rPlmrHxs{background:#e6f7ff!important;color:#006097!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3W4ZnQjhoGfT1gTNcqRXdi .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-38EPFyKXMtoP12rPlmrHxs{display:none!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-HGYnfzlmgOZ-l7eANhQe_{background:#fff3ea!important;color:#993a00!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-24e52A11B1UIErbKHtBmqc .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-HGYnfzlmgOZ-l7eANhQe_{display:none!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-jji74ZzulHScD0OAD_G7h{background:#fef2f1!important;color:#b10823!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3npS60y-EvfF7G_lioSx2Q.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-28jAOA7cDee-95LvwGsOP- .IN-2bc0215c-7188-4274-b598-1969e06d4d7c-jji74ZzulHScD0OAD_G7h{display:none!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu{background-color:#0073b1!important;border:0!important;border-radius:2px!important;box-sizing:border-box!important;color:#fff!important;cursor:pointer!important;display:inline-block!important;font-family:-apple-system,system-ui,BlinkMacSystemFont,Segoe UI,Roboto,Helvetica Neue,Fira Sans,Ubuntu,Oxygen,Oxygen Sans,Cantarell,Droid Sans,Apple Color Emoji,Segoe UI Emoji,Segoe UI Symbol,Lucida Grande,Helvetica,Arial,sans-serif!important;font-weight:600!important;overflow:hidden!important;outline-width:2px!important;position:relative!important;text-align:center!important;text-decoration:none!important;vertical-align:middle!important;white-space:nowrap!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu:disabled{cursor:not-allowed!important;opacity:.7!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu:not(:disabled):not(.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1zhzkayakwEXovVYUbq5Gy):hover{background-color:#006097!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu:not(:disabled):not(.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1zhzkayakwEXovVYUbq5Gy):active{background-color:#004b7c!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1zhzkayakwEXovVYUbq5Gy{background-color:#fff!important;color:#0073b1!important;box-shadow:inset 0 0 0 1px rgba(0,0,0,.3)!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1zhzkayakwEXovVYUbq5Gy:not(:disabled):hover{color:#006097!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1zhzkayakwEXovVYUbq5Gy:not(:disabled):active{color:#004b7c!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu>xdoor-icon{display:inline-block!important;height:100%!important;vertical-align:top!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu>xdoor-icon>svg{pointer-events:none!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-7inSbaAsvG5bf7w6lJTEr{font-size:10px!important;height:16px!important;line-height:16px!important;padding:0 6px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-7inSbaAsvG5bf7w6lJTEr>xdoor-icon{margin-left:-6px!important;margin-right:3px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-7inSbaAsvG5bf7w6lJTEr>xdoor-icon>svg{height:16px!important;width:16px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-7inSbaAsvG5bf7w6lJTEr.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-2lrEjt4SOTxqrYsv1piG4c>xdoor-icon{margin-right:-6px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu,.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3uCBSbQNVNf2QjqHe1rfb6{font-size:11px!important;height:20px!important;line-height:20px!important;padding:0 7px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3uCBSbQNVNf2QjqHe1rfb6>xdoor-icon,.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu>xdoor-icon{margin-left:-7px!important;margin-right:3.5px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3uCBSbQNVNf2QjqHe1rfb6>xdoor-icon>svg,.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu>xdoor-icon>svg{height:20px!important;width:20px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-3uCBSbQNVNf2QjqHe1rfb6.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-2lrEjt4SOTxqrYsv1piG4c>xdoor-icon,.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-2lrEjt4SOTxqrYsv1piG4c>xdoor-icon{margin-right:-7px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-21Smv9YG-5V6M6KP-5v2WG{font-size:14px!important;height:24px!important;line-height:24px!important;padding:0 12px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-21Smv9YG-5V6M6KP-5v2WG>xdoor-icon{margin-left:-12px!important;margin-right:6px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-21Smv9YG-5V6M6KP-5v2WG>xdoor-icon>svg{height:24px!important;width:24px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-21Smv9YG-5V6M6KP-5v2WG.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-2lrEjt4SOTxqrYsv1piG4c>xdoor-icon{margin-right:-12px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1TGdQUTLZdNG4R87OfAB-q{font-size:16px!important;height:32px!important;line-height:32px!important;padding:0 16px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1TGdQUTLZdNG4R87OfAB-q>xdoor-icon{margin-left:-16px!important;margin-right:8px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1TGdQUTLZdNG4R87OfAB-q>xdoor-icon>svg{height:32px!important;width:32px!important}.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1TGdQUTLZdNG4R87OfAB-q.IN-2bc0215c-7188-4274-b598-1969e06d4d7c-2lrEjt4SOTxqrYsv1piG4c>xdoor-icon{margin-right:-16px!important}</style><script charset="utf-8" src="./p_files/button.93a0c25c2d2f3081c705c98c2d9dec0e.js.download"></script><style type="text/css">.fb_hidden{position:absolute;top:-10000px;z-index:10001}.fb_reposition{overflow:hidden;position:relative}.fb_invisible{display:none}.fb_reset{background:none;border:0;border-spacing:0;color:#000;cursor:auto;direction:ltr;font-family:"lucida grande", tahoma, verdana, arial, sans-serif;font-size:11px;font-style:normal;font-variant:normal;font-weight:normal;letter-spacing:normal;line-height:1;margin:0;overflow:visible;padding:0;text-align:left;text-decoration:none;text-indent:0;text-shadow:none;text-transform:none;visibility:visible;white-space:normal;word-spacing:normal}.fb_reset>div{overflow:hidden}@keyframes fb_transform{from{opacity:0;transform:scale(.95)}to{opacity:1;transform:scale(1)}}.fb_animate{animation:fb_transform .3s forwards}
.fb_dialog{background:rgba(82, 82, 82, .7);position:absolute;top:-10000px;z-index:10001}.fb_dialog_advanced{border-radius:8px;padding:10px}.fb_dialog_content{background:#fff;color:#373737}.fb_dialog_close_icon{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 0 transparent;cursor:pointer;display:block;height:15px;position:absolute;right:18px;top:17px;width:15px}.fb_dialog_mobile .fb_dialog_close_icon{left:5px;right:auto;top:5px}.fb_dialog_padding{background-color:transparent;position:absolute;width:1px;z-index:-1}.fb_dialog_close_icon:hover{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -15px transparent}.fb_dialog_close_icon:active{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yq/r/IE9JII6Z1Ys.png) no-repeat scroll 0 -30px transparent}.fb_dialog_iframe{line-height:0}.fb_dialog_content .dialog_title{background:#6d84b4;border:1px solid #365899;color:#fff;font-size:14px;font-weight:bold;margin:0}.fb_dialog_content .dialog_title>span{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/yd/r/Cou7n-nqK52.gif) no-repeat 5px 50%;float:left;padding:5px 0 7px 26px}body.fb_hidden{height:100%;left:0;margin:0;overflow:visible;position:absolute;top:-10000px;transform:none;width:100%}.fb_dialog.fb_dialog_mobile.loading{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/ya/r/3rhSv5V8j3o.gif) white no-repeat 50% 50%;min-height:100%;min-width:100%;overflow:hidden;position:absolute;top:0;z-index:10001}.fb_dialog.fb_dialog_mobile.loading.centered{background:none;height:auto;min-height:initial;min-width:initial;width:auto}.fb_dialog.fb_dialog_mobile.loading.centered #fb_dialog_loader_spinner{width:100%}.fb_dialog.fb_dialog_mobile.loading.centered .fb_dialog_content{background:none}.loading.centered #fb_dialog_loader_close{clear:both;color:#fff;display:block;font-size:18px;padding-top:20px}#fb-root #fb_dialog_ipad_overlay{background:rgba(0, 0, 0, .4);bottom:0;left:0;min-height:100%;position:absolute;right:0;top:0;width:100%;z-index:10000}#fb-root #fb_dialog_ipad_overlay.hidden{display:none}.fb_dialog.fb_dialog_mobile.loading iframe{visibility:hidden}.fb_dialog_mobile .fb_dialog_iframe{position:sticky;top:0}.fb_dialog_content .dialog_header{background:linear-gradient(from(#738aba), to(#2c4987));border-bottom:1px solid;border-color:#043b87;box-shadow:white 0 1px 1px -1px inset;color:#fff;font:bold 14px Helvetica, sans-serif;text-overflow:ellipsis;text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0;vertical-align:middle;white-space:nowrap}.fb_dialog_content .dialog_header table{height:43px;width:100%}.fb_dialog_content .dialog_header td.header_left{font-size:12px;padding-left:5px;vertical-align:middle;width:60px}.fb_dialog_content .dialog_header td.header_right{font-size:12px;padding-right:5px;vertical-align:middle;width:60px}.fb_dialog_content .touchable_button{background:linear-gradient(from(#4267B2), to(#2a4887));background-clip:padding-box;border:1px solid #29487d;border-radius:3px;display:inline-block;line-height:18px;margin-top:3px;max-width:85px;padding:4px 12px;position:relative}.fb_dialog_content .dialog_header .touchable_button input{background:none;border:none;color:#fff;font:bold 12px Helvetica, sans-serif;margin:2px -12px;padding:2px 6px 3px 6px;text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0}.fb_dialog_content .dialog_header .header_center{color:#fff;font-size:16px;font-weight:bold;line-height:18px;text-align:center;vertical-align:middle}.fb_dialog_content .dialog_content{background:url(https://static.xx.fbcdn.net/rsrc.php/v3/y9/r/jKEcVPZFk-2.gif) no-repeat 50% 50%;border:1px solid #4a4a4a;border-bottom:0;border-top:0;height:150px}.fb_dialog_content .dialog_footer{background:#f5f6f7;border:1px solid #4a4a4a;border-top-color:#ccc;height:40px}#fb_dialog_loader_close{float:left}.fb_dialog.fb_dialog_mobile .fb_dialog_close_button{text-shadow:rgba(0, 30, 84, .296875) 0 -1px 0}.fb_dialog.fb_dialog_mobile .fb_dialog_close_icon{visibility:hidden}#fb_dialog_loader_spinner{animation:rotateSpinner 1.2s linear infinite;background-color:transparent;background-image:url(https://static.xx.fbcdn.net/rsrc.php/v3/yD/r/t-wz8gw1xG1.png);background-position:50% 50%;background-repeat:no-repeat;height:24px;width:24px}@keyframes rotateSpinner{0%{transform:rotate(0deg)}100%{transform:rotate(360deg)}}
.fb_iframe_widget{display:inline-block;position:relative}.fb_iframe_widget span{display:inline-block;position:relative;text-align:justify}.fb_iframe_widget iframe{position:absolute}.fb_iframe_widget_fluid_desktop,.fb_iframe_widget_fluid_desktop span,.fb_iframe_widget_fluid_desktop iframe{max-width:100%}.fb_iframe_widget_fluid_desktop iframe{min-width:220px;position:relative}.fb_iframe_widget_lift{z-index:1}.fb_iframe_widget_fluid{display:inline}.fb_iframe_widget_fluid span{width:100%}</style></head>
<body>
<div id="header" class="container">
	<div id="logo">
		<h1><a href="http://www.cprogrammingtutorial.org/">C <span>Programming tutorials</span></a></h1>
	</div>
	<div id="menu">
		<ul>
			<li><a href="http://www.cprogrammingtutorial.org/" accesskey="1" title="">Home</a></li>
			<li class="active"><a href="http://www.cprogrammingtutorial.org/cprograms.html" accesskey="2" title="">C Programs</a></li>
			</ul>
	</div>
</div>
<div id="wrapper" style="height: auto !important;">
	<div id="wrapper-bgbtm" style="height: auto !important;">
      <div id="ad1" class="ad1" style="height: auto !important;">
          <script id="twitter-wjs" src="./p_files/widgets.js.download"></script><script type="text/javascript" async="" src="./p_files/platform.js.download" gapi_processed="true"></script><script id="facebook-jssdk" src="./p_files/sdk.js(1).download"></script><script async="" src="./p_files/f(4).txt"></script>
<!-- cprogrampagetop -->
<ins class="adsbygoogle" style="display: block; height: 280px;" data-ad-client="ca-pub-5856407216862717" data-ad-slot="6814798982" data-ad-format="auto" data-adsbygoogle-status="done"><ins id="aswift_0_expand" style="display:inline-table;border:none;height:280px;margin:0;padding:0;position:relative;visibility:visible;width:728px;background-color:transparent;"><ins id="aswift_0_anchor" style="display:block;border:none;height:280px;margin:0;padding:0;position:relative;visibility:visible;width:728px;background-color:transparent;"><iframe width="728" height="280" frameborder="0" marginwidth="0" marginheight="0" vspace="0" hspace="0" allowtransparency="true" scrolling="no" allowfullscreen="true" onload="var i=this.id,s=window.google_iframe_oncopy,H=s&amp;&amp;s.handlers,h=H&amp;&amp;H[i],w=this.contentWindow,d;try{d=w.document}catch(e){}if(h&amp;&amp;d&amp;&amp;(!d.body||!d.body.firstChild)){if(h.call){setTimeout(h,0)}else if(h.match){try{h=s.upd(h,i)}catch(e){}w.location.replace(h)}}" id="aswift_0" name="aswift_0" style="left: 0px; position: absolute; top: 0px; border: 0px; width: 728px; height: 280px; overflow: visible;" src="./p_files/saved_resource.html"></iframe></ins></ins></ins>
<script>
(adsbygoogle = window.adsbygoogle || []).push({});
</script>
          
      </div>
      <div class="ad2" id="ad2">
         
      </div>
      <div class="program" id="program">
    
            <h2>Write a paint program in C</h2><br><br><br><p><br>
<br>
Paint program in C : Paint program in c is a simple program that allows drawing shapes and changing its color.This program contains two control panels, shapes panel and color panel to draw pictures. C graphics provides 16 number of colors, so that only 16 colors are available to use paint. Initially C language is in text mode, it should be changed to graphics mode. Hence we must first change over to graphics mode. In our Paint program function initgraph() is responsible for switching&nbsp;&nbsp;mode from text to graphics .DETECT is a macro defined in 'graphics.h'. It requests initgraph() for automatically determine which graphics driver load in order to switch by the highest resolution graphics mode. Initgraph() function takes three parameters, the graphics driver, graphics mode and path to the driver file. Once the driver has been loaded, initgraph() sets up the numeric values of graphics mode chosen in the variables gd and gm respectively. Here we are assuming that driver files are in the directory 'c:\\turboc30\\bgi'. Hence the path passed to initgraph() is 'c:\\turboc30\\bgi'.<br>
<br>
In our paint program we have these operations :- <br>
"Bar"		:-draws a Bar,<br>
"Line"		:-draws a line,<br>
"Pixel"		:-change pixel value,<br>
"Ellipse"	:-draws an ellipse,<br>
"Freehand"	:-gives mouse pointer,so user can draw freehand figures &amp;<br>
"Rectangle"	:-draws a rectangle.<br>
These operations are done with paint program,it uses key values for performing those operations such as B,L,P,E,F &amp; R respectively. C graphics provides only 16 different colors shown in EGA directory. Our paint program use these 16 color.Our paint code use key values of each color &amp; change color operation done with these key values.<br>
 <br>
BLACK (0), BLUE (1), GREEN(2), CYAN (3), RED (4), MAGENTA (5), BROWN(6),LIGHTGRAY (7), DARKGRAY(8), LIGHTBLUE (9), LIGHTGREEN (10), LIGHTCYAN (11), LIGHTRED (12), LIGHTMAGENTA (13), YELLOW (14), WHITE (15).</p>===================================================================<br><pre><font size="4"><pre class="c" style="font-family: Times New Roman">&nbsp;
<span style="color: #339933;">#include&lt;graphics.h&gt;</span>
&nbsp;
<span style="color: #339933;">#include&lt;dos.h&gt;</span>
&nbsp;
<span style="color: #339933;">#include&lt;math.h&gt;</span>
&nbsp;
<span style="color: #339933;">#include&lt;stdlib.h&gt;</span>
&nbsp;
<span style="color: #339933;">#include&lt;stdio.h&gt;</span>
&nbsp;
<span style="color: #339933;">#include&lt;conio.h&gt;</span>
&nbsp;
<span style="color: #993333;">union</span> REGS i<span style="color: #339933;">,</span> o<span style="color: #339933;">;</span>
&nbsp;
<span style="color: #993333;">int</span> leftcolor<span style="color: #009900;">[</span><span style="color: #0000dd;">15</span><span style="color: #009900;">]</span><span style="color: #339933;">;</span>
&nbsp;
<span style="color: #993333;">int</span> get_key<span style="color: #009900;">(</span><span style="color: #009900;">)</span>
&nbsp;
<span style="color: #009900;">{</span>
&nbsp;
   <span style="color: #993333;">union</span> REGS i<span style="color: #339933;">,</span>o<span style="color: #339933;">;</span>
&nbsp;
   i.<span style="color: #202020;">h</span>.<span style="color: #202020;">ah</span> <span style="color: #339933;">=</span> <span style="color: #0000dd;">0</span><span style="color: #339933;">;</span>
&nbsp;
   int86<span style="color: #009900;">(</span><span style="color: #0000dd;">22</span><span style="color: #339933;">,&amp;</span>i<span style="color: #339933;">,&amp;</span>o<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #b1b100;">return</span> <span style="color: #009900;">(</span> o.<span style="color: #202020;">h</span>.<span style="color: #202020;">ah</span> <span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
<span style="color: #009900;">}</span>
&nbsp;
<span style="color: #993333;">void</span> draw_color_panel<span style="color: #009900;">(</span><span style="color: #009900;">)</span>
&nbsp;
<span style="color: #009900;">{</span>
&nbsp;
   <span style="color: #993333;">int</span> left<span style="color: #339933;">,</span> top<span style="color: #339933;">,</span> c<span style="color: #339933;">,</span> color<span style="color: #339933;">;</span>
&nbsp;
   left <span style="color: #339933;">=</span> <span style="color: #0000dd;">100</span><span style="color: #339933;">;</span>
&nbsp;
   top <span style="color: #339933;">=</span> <span style="color: #0000dd;">436</span><span style="color: #339933;">;</span>
&nbsp;
   color <span style="color: #339933;">=</span> getcolor<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   setcolor<span style="color: #009900;">(</span>GREEN<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   rectangle<span style="color: #009900;">(</span><span style="color: #0000dd;">4</span><span style="color: #339933;">,</span><span style="color: #0000dd;">431</span><span style="color: #339933;">,</span><span style="color: #0000dd;">635</span><span style="color: #339933;">,</span><span style="color: #0000dd;">457</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   setcolor<span style="color: #009900;">(</span>RED<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   settextstyle<span style="color: #009900;">(</span>TRIPLEX_FONT<span style="color: #339933;">,</span><span style="color: #0000dd;">0</span><span style="color: #339933;">,</span><span style="color: #0000dd;">2</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   outtextxy<span style="color: #009900;">(</span><span style="color: #0000dd;">10</span><span style="color: #339933;">,</span><span style="color: #0000dd;">431</span><span style="color: #339933;">,</span><span style="color: #ff0000;">"Colors : "</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #b1b100;">for</span><span style="color: #009900;">(</span> c <span style="color: #339933;">=</span> <span style="color: #0000dd;">1</span> <span style="color: #339933;">;</span> c <span style="color: #339933;">&lt;=</span> <span style="color: #0000dd;">15</span> <span style="color: #339933;">;</span> c<span style="color: #339933;">++</span> <span style="color: #009900;">)</span>
&nbsp;
   <span style="color: #009900;">{</span>
&nbsp;
      setfillstyle<span style="color: #009900;">(</span>SOLID_FILL<span style="color: #339933;">,</span> c<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
      bar<span style="color: #009900;">(</span>left<span style="color: #339933;">,</span> top<span style="color: #339933;">,</span> left<span style="color: #339933;">+</span><span style="color: #0000dd;">16</span><span style="color: #339933;">,</span> top<span style="color: #339933;">+</span><span style="color: #0000dd;">16</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
      leftcolor<span style="color: #009900;">[</span>c<span style="color: #339933;">-</span><span style="color: #0000dd;">1</span><span style="color: #009900;">]</span> <span style="color: #339933;">=</span> left<span style="color: #339933;">;</span>
&nbsp;
      left <span style="color: #339933;">+=</span> <span style="color: #0000dd;">26</span><span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #009900;">}</span>
&nbsp;
   setcolor<span style="color: #009900;">(</span>color<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
<span style="color: #009900;">}</span>
&nbsp;
<span style="color: #993333;">void</span> draw_shape_panel<span style="color: #009900;">(</span><span style="color: #009900;">)</span>
&nbsp;
<span style="color: #009900;">{</span>
&nbsp;
   <span style="color: #993333;">int</span> left<span style="color: #339933;">,</span> top<span style="color: #339933;">,</span> c<span style="color: #339933;">,</span> color<span style="color: #339933;">;</span>
&nbsp;
&nbsp;
   left <span style="color: #339933;">=</span> <span style="color: #0000dd;">529</span><span style="color: #339933;">;</span>
&nbsp;
   top <span style="color: #339933;">=</span> <span style="color: #0000dd;">45</span><span style="color: #339933;">;</span>
&nbsp;
   color <span style="color: #339933;">=</span> getcolor<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   setcolor<span style="color: #009900;">(</span>GREEN<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   rectangle<span style="color: #009900;">(</span><span style="color: #0000dd;">525</span><span style="color: #339933;">,</span><span style="color: #0000dd;">40</span><span style="color: #339933;">,</span><span style="color: #0000dd;">633</span><span style="color: #339933;">,</span><span style="color: #0000dd;">255</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
&nbsp;
   <span style="color: #b1b100;">for</span><span style="color: #009900;">(</span> c <span style="color: #339933;">=</span> <span style="color: #0000dd;">1</span> <span style="color: #339933;">;</span> c <span style="color: #339933;">&lt;=</span> <span style="color: #0000dd;">7</span> <span style="color: #339933;">;</span> c<span style="color: #339933;">++</span> <span style="color: #009900;">)</span>
&nbsp;
   <span style="color: #009900;">{</span>
&nbsp;
      rectangle<span style="color: #009900;">(</span>left<span style="color: #339933;">,</span> top<span style="color: #339933;">,</span> left<span style="color: #339933;">+</span><span style="color: #0000dd;">100</span><span style="color: #339933;">,</span> top<span style="color: #339933;">+</span><span style="color: #0000dd;">25</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
      top <span style="color: #339933;">+=</span> <span style="color: #0000dd;">30</span><span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #009900;">}</span>
&nbsp;
   setcolor<span style="color: #009900;">(</span>RED<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   outtextxy<span style="color: #009900;">(</span><span style="color: #0000dd;">530</span><span style="color: #339933;">,</span><span style="color: #0000dd;">45</span><span style="color: #339933;">,</span><span style="color: #ff0000;">"Bar"</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   outtextxy<span style="color: #009900;">(</span><span style="color: #0000dd;">530</span><span style="color: #339933;">,</span><span style="color: #0000dd;">75</span><span style="color: #339933;">,</span><span style="color: #ff0000;">"Line"</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   outtextxy<span style="color: #009900;">(</span><span style="color: #0000dd;">530</span><span style="color: #339933;">,</span><span style="color: #0000dd;">105</span><span style="color: #339933;">,</span><span style="color: #ff0000;">"Pixel"</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   outtextxy<span style="color: #009900;">(</span><span style="color: #0000dd;">530</span><span style="color: #339933;">,</span><span style="color: #0000dd;">135</span><span style="color: #339933;">,</span><span style="color: #ff0000;">"Ellipse"</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   outtextxy<span style="color: #009900;">(</span><span style="color: #0000dd;">530</span><span style="color: #339933;">,</span><span style="color: #0000dd;">165</span><span style="color: #339933;">,</span><span style="color: #ff0000;">"Freehand"</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   outtextxy<span style="color: #009900;">(</span><span style="color: #0000dd;">530</span><span style="color: #339933;">,</span><span style="color: #0000dd;">195</span><span style="color: #339933;">,</span><span style="color: #ff0000;">"Rectangle"</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   outtextxy<span style="color: #009900;">(</span><span style="color: #0000dd;">530</span><span style="color: #339933;">,</span><span style="color: #0000dd;">225</span><span style="color: #339933;">,</span><span style="color: #ff0000;">"Clear"</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   setcolor<span style="color: #009900;">(</span>color<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
<span style="color: #009900;">}</span>
&nbsp;
&nbsp;
<span style="color: #993333;">void</span> change_color<span style="color: #009900;">(</span><span style="color: #993333;">int</span> x<span style="color: #339933;">,</span> <span style="color: #993333;">int</span> y<span style="color: #009900;">)</span>
&nbsp;
<span style="color: #009900;">{</span>
&nbsp;
   <span style="color: #993333;">int</span> c<span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #b1b100;">for</span><span style="color: #009900;">(</span> c <span style="color: #339933;">=</span> <span style="color: #0000dd;">0</span> <span style="color: #339933;">;</span> c <span style="color: #339933;">&lt;=</span> <span style="color: #0000dd;">13</span> <span style="color: #339933;">;</span> c<span style="color: #339933;">++</span> <span style="color: #009900;">)</span>
&nbsp;
   <span style="color: #009900;">{</span>
&nbsp;
      <span style="color: #b1b100;">if</span><span style="color: #009900;">(</span> x <span style="color: #339933;">&gt;</span> leftcolor<span style="color: #009900;">[</span>c<span style="color: #009900;">]</span> <span style="color: #339933;">&amp;&amp;</span> x <span style="color: #339933;">&lt;</span> leftcolor<span style="color: #009900;">[</span>c<span style="color: #339933;">+</span><span style="color: #0000dd;">1</span><span style="color: #009900;">]</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">437</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">453</span> <span style="color: #009900;">)</span>
&nbsp;
         setcolor<span style="color: #009900;">(</span>c<span style="color: #339933;">+</span><span style="color: #0000dd;">1</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
      <span style="color: #b1b100;">if</span><span style="color: #009900;">(</span> x <span style="color: #339933;">&gt;</span> leftcolor<span style="color: #009900;">[</span><span style="color: #0000dd;">14</span><span style="color: #009900;">]</span> <span style="color: #339933;">&amp;&amp;</span> x <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">505</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">437</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">453</span> <span style="color: #009900;">)</span>
&nbsp;
         setcolor<span style="color: #009900;">(</span>WHITE<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #009900;">}</span>
&nbsp;
<span style="color: #009900;">}</span>
&nbsp;
&nbsp;
<span style="color: #993333;">char</span> change_shape<span style="color: #009900;">(</span><span style="color: #993333;">int</span> x<span style="color: #339933;">,</span> <span style="color: #993333;">int</span> y<span style="color: #009900;">)</span>
&nbsp;
<span style="color: #009900;">{</span>
&nbsp;
   <span style="color: #b1b100;">if</span> <span style="color: #009900;">(</span> x <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">529</span> <span style="color: #339933;">&amp;&amp;</span> x <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">625</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">45</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">70</span> <span style="color: #009900;">)</span>
&nbsp;
      <span style="color: #b1b100;">return</span> <span style="color: #ff0000;">'b'</span><span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #b1b100;">else</span> <span style="color: #b1b100;">if</span> <span style="color: #009900;">(</span> x <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">529</span> <span style="color: #339933;">&amp;&amp;</span> x <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">625</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">75</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">100</span> <span style="color: #009900;">)</span>
&nbsp;
      <span style="color: #b1b100;">return</span> <span style="color: #ff0000;">'l'</span><span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #b1b100;">else</span> <span style="color: #b1b100;">if</span> <span style="color: #009900;">(</span> x <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">529</span> <span style="color: #339933;">&amp;&amp;</span> x <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">625</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">105</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">130</span> <span style="color: #009900;">)</span>
&nbsp;
      <span style="color: #b1b100;">return</span> <span style="color: #ff0000;">'p'</span><span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #b1b100;">else</span> <span style="color: #b1b100;">if</span> <span style="color: #009900;">(</span> x <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">529</span> <span style="color: #339933;">&amp;&amp;</span> x <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">625</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">135</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">160</span> <span style="color: #009900;">)</span>
&nbsp;
      <span style="color: #b1b100;">return</span> <span style="color: #ff0000;">'e'</span><span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #b1b100;">else</span> <span style="color: #b1b100;">if</span> <span style="color: #009900;">(</span> x <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">529</span> <span style="color: #339933;">&amp;&amp;</span> x <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">625</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">165</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">190</span> <span style="color: #009900;">)</span>
&nbsp;
      <span style="color: #b1b100;">return</span> <span style="color: #ff0000;">'f'</span><span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #b1b100;">else</span> <span style="color: #b1b100;">if</span> <span style="color: #009900;">(</span> x <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">529</span> <span style="color: #339933;">&amp;&amp;</span> x <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">625</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">195</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">220</span> <span style="color: #009900;">)</span>
&nbsp;
      <span style="color: #b1b100;">return</span> <span style="color: #ff0000;">'r'</span><span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #b1b100;">else</span> <span style="color: #b1b100;">if</span> <span style="color: #009900;">(</span> x <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">529</span> <span style="color: #339933;">&amp;&amp;</span> x <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">625</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">225</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">250</span> <span style="color: #009900;">)</span>
&nbsp;
      <span style="color: #b1b100;">return</span> <span style="color: #ff0000;">'c'</span><span style="color: #339933;">;</span>
&nbsp;
<span style="color: #009900;">}</span>
&nbsp;
<span style="color: #993333;">void</span> showmouseptr<span style="color: #009900;">(</span><span style="color: #009900;">)</span>
&nbsp;
<span style="color: #009900;">{</span>
&nbsp;
   i.<span style="color: #202020;">x</span>.<span style="color: #202020;">ax</span> <span style="color: #339933;">=</span> <span style="color: #0000dd;">1</span><span style="color: #339933;">;</span>
&nbsp;
   int86<span style="color: #009900;">(</span><span style="color: #208080;">0x33</span><span style="color: #339933;">,&amp;</span>i<span style="color: #339933;">,&amp;</span>o<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
<span style="color: #009900;">}</span>
&nbsp;
<span style="color: #993333;">void</span> hidemouseptr<span style="color: #009900;">(</span><span style="color: #009900;">)</span>
&nbsp;
<span style="color: #009900;">{</span>
&nbsp;
   i.<span style="color: #202020;">x</span>.<span style="color: #202020;">ax</span> <span style="color: #339933;">=</span> <span style="color: #0000dd;">2</span><span style="color: #339933;">;</span>
&nbsp;
   int86<span style="color: #009900;">(</span><span style="color: #208080;">0x33</span><span style="color: #339933;">,&amp;</span>i<span style="color: #339933;">,&amp;</span>o<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
<span style="color: #009900;">}</span>
&nbsp;
<span style="color: #993333;">void</span> restrictmouseptr<span style="color: #009900;">(</span> <span style="color: #993333;">int</span> x1<span style="color: #339933;">,</span> <span style="color: #993333;">int</span> y1<span style="color: #339933;">,</span> <span style="color: #993333;">int</span> x2<span style="color: #339933;">,</span> <span style="color: #993333;">int</span> y2<span style="color: #009900;">)</span>
&nbsp;
<span style="color: #009900;">{</span>
&nbsp;
   i.<span style="color: #202020;">x</span>.<span style="color: #202020;">ax</span> <span style="color: #339933;">=</span> <span style="color: #0000dd;">7</span><span style="color: #339933;">;</span>
&nbsp;
   i.<span style="color: #202020;">x</span>.<span style="color: #202020;">cx</span> <span style="color: #339933;">=</span> x1<span style="color: #339933;">;</span>
&nbsp;
   i.<span style="color: #202020;">x</span>.<span style="color: #202020;">dx</span> <span style="color: #339933;">=</span> x2<span style="color: #339933;">;</span>
&nbsp;
   int86<span style="color: #009900;">(</span><span style="color: #208080;">0x33</span><span style="color: #339933;">,&amp;</span>i<span style="color: #339933;">,&amp;</span>o<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   i.<span style="color: #202020;">x</span>.<span style="color: #202020;">ax</span> <span style="color: #339933;">=</span> <span style="color: #0000dd;">8</span><span style="color: #339933;">;</span>
&nbsp;
   i.<span style="color: #202020;">x</span>.<span style="color: #202020;">cx</span> <span style="color: #339933;">=</span> y1<span style="color: #339933;">;</span>
&nbsp;
   i.<span style="color: #202020;">x</span>.<span style="color: #202020;">dx</span> <span style="color: #339933;">=</span> y2<span style="color: #339933;">;</span>
&nbsp;
   int86<span style="color: #009900;">(</span><span style="color: #208080;">0x33</span><span style="color: #339933;">,&amp;</span>i<span style="color: #339933;">,&amp;</span>o<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
<span style="color: #009900;">}</span>
&nbsp;
<span style="color: #993333;">void</span> getmousepos<span style="color: #009900;">(</span><span style="color: #993333;">int</span> <span style="color: #339933;">*</span>button<span style="color: #339933;">,</span><span style="color: #993333;">int</span> <span style="color: #339933;">*</span>x<span style="color: #339933;">,</span><span style="color: #993333;">int</span> <span style="color: #339933;">*</span>y<span style="color: #009900;">)</span>
&nbsp;
<span style="color: #009900;">{</span>
&nbsp;
   i.<span style="color: #202020;">x</span>.<span style="color: #202020;">ax</span> <span style="color: #339933;">=</span> <span style="color: #0000dd;">3</span><span style="color: #339933;">;</span>
&nbsp;
   int86<span style="color: #009900;">(</span><span style="color: #208080;">0x33</span><span style="color: #339933;">,&amp;</span>i<span style="color: #339933;">,&amp;</span>o<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #339933;">*</span>button <span style="color: #339933;">=</span> o.<span style="color: #202020;">x</span>.<span style="color: #202020;">bx</span><span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #339933;">*</span>x <span style="color: #339933;">=</span> o.<span style="color: #202020;">x</span>.<span style="color: #202020;">cx</span><span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #339933;">*</span>y <span style="color: #339933;">=</span> o.<span style="color: #202020;">x</span>.<span style="color: #202020;">dx</span><span style="color: #339933;">;</span>
&nbsp;
<span style="color: #009900;">}</span>
&nbsp;
&nbsp;
main<span style="color: #009900;">(</span><span style="color: #009900;">)</span>
&nbsp;
<span style="color: #009900;">{</span>
&nbsp;
   <span style="color: #993333;">int</span> gd <span style="color: #339933;">=</span> DETECT<span style="color: #339933;">,</span>gm<span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #993333;">int</span> maxx<span style="color: #339933;">,</span>maxy<span style="color: #339933;">,</span>x<span style="color: #339933;">,</span>y<span style="color: #339933;">,</span>button<span style="color: #339933;">,</span>prevx<span style="color: #339933;">,</span>prevy<span style="color: #339933;">,</span>temp1<span style="color: #339933;">,</span>temp2<span style="color: #339933;">,</span>key<span style="color: #339933;">,</span>color<span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #993333;">char</span> ch <span style="color: #339933;">=</span> <span style="color: #ff0000;">'f'</span> <span style="color: #339933;">;</span>            <span style="color: #666666; font-style: italic; font-family: Georgia, " times="" new="" roman",="" times,="" serif;"="">// default free-hand drawing</span>
&nbsp;
   initgraph<span style="color: #009900;">(</span><span style="color: #339933;">&amp;</span>gd<span style="color: #339933;">,&amp;</span>gm<span style="color: #339933;">,</span><span style="color: #ff0000;">"C:<span style="color: #000099; font-weight: bold;">\\</span>TC<span style="color: #000099; font-weight: bold;">\\</span>BGI"</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   maxx <span style="color: #339933;">=</span> getmaxx<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   maxy <span style="color: #339933;">=</span> getmaxy<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   setcolor<span style="color: #009900;">(</span>BLUE<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   rectangle<span style="color: #009900;">(</span><span style="color: #0000dd;">0</span><span style="color: #339933;">,</span><span style="color: #0000dd;">0</span><span style="color: #339933;">,</span>maxx<span style="color: #339933;">,</span>maxy<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   setcolor<span style="color: #009900;">(</span>WHITE<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   settextstyle<span style="color: #009900;">(</span>SANS_SERIF_FONT<span style="color: #339933;">,</span>HORIZ_DIR<span style="color: #339933;">,</span><span style="color: #0000dd;">2</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   outtextxy<span style="color: #009900;">(</span>maxx<span style="color: #339933;">/</span><span style="color: #0000dd;">2</span><span style="color: #339933;">-</span><span style="color: #0000dd;">180</span><span style="color: #339933;">,</span>maxy<span style="color: #339933;">-</span><span style="color: #0000dd;">28</span><span style="color: #339933;">,</span><span style="color: #ff0000;">"www.stemsoftwares.com"</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   draw_color_panel<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   draw_shape_panel<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   setviewport<span style="color: #009900;">(</span><span style="color: #0000dd;">1</span><span style="color: #339933;">,</span><span style="color: #0000dd;">1</span><span style="color: #339933;">,</span>maxx<span style="color: #339933;">-</span><span style="color: #0000dd;">1</span><span style="color: #339933;">,</span>maxy<span style="color: #339933;">-</span><span style="color: #0000dd;">1</span><span style="color: #339933;">,</span><span style="color: #0000dd;">1</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   restrictmouseptr<span style="color: #009900;">(</span><span style="color: #0000dd;">1</span><span style="color: #339933;">,</span><span style="color: #0000dd;">1</span><span style="color: #339933;">,</span>maxx<span style="color: #339933;">-</span><span style="color: #0000dd;">1</span><span style="color: #339933;">,</span>maxy<span style="color: #339933;">-</span><span style="color: #0000dd;">1</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   showmouseptr<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   rectangle<span style="color: #009900;">(</span><span style="color: #0000dd;">2</span><span style="color: #339933;">,</span><span style="color: #0000dd;">2</span><span style="color: #339933;">,</span><span style="color: #0000dd;">518</span><span style="color: #339933;">,</span><span style="color: #0000dd;">427</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   setviewport<span style="color: #009900;">(</span><span style="color: #0000dd;">1</span><span style="color: #339933;">,</span><span style="color: #0000dd;">1</span><span style="color: #339933;">,</span><span style="color: #0000dd;">519</span><span style="color: #339933;">,</span><span style="color: #0000dd;">428</span><span style="color: #339933;">,</span><span style="color: #0000dd;">1</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
   <span style="color: #b1b100;">while</span><span style="color: #009900;">(</span><span style="color: #0000dd;">1</span><span style="color: #009900;">)</span>
&nbsp;
   <span style="color: #009900;">{</span>
&nbsp;
      <span style="color: #b1b100;">if</span><span style="color: #009900;">(</span>kbhit<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #009900;">)</span>
&nbsp;
      <span style="color: #009900;">{</span>
         key <span style="color: #339933;">=</span> get_key<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
         <span style="color: #b1b100;">if</span><span style="color: #009900;">(</span> key <span style="color: #339933;">==</span> <span style="color: #0000dd;">1</span> <span style="color: #009900;">)</span>
&nbsp;
         <span style="color: #009900;">{</span>
            closegraph<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
            <span style="color: #000066;">exit</span><span style="color: #009900;">(</span><span style="color: #0000dd;">0</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
         <span style="color: #009900;">}</span>
&nbsp;
      <span style="color: #009900;">}</span>
&nbsp;
      getmousepos<span style="color: #009900;">(</span><span style="color: #339933;">&amp;</span>button<span style="color: #339933;">,&amp;</span>x<span style="color: #339933;">,&amp;</span>y<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
      <span style="color: #b1b100;">if</span><span style="color: #009900;">(</span> button <span style="color: #339933;">==</span> <span style="color: #0000dd;">1</span> <span style="color: #009900;">)</span>
&nbsp;
      <span style="color: #009900;">{</span>
&nbsp;
         <span style="color: #b1b100;">if</span><span style="color: #009900;">(</span> x <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">4</span> <span style="color: #339933;">&amp;&amp;</span> x <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">635</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">431</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">457</span> <span style="color: #009900;">)</span>
&nbsp;
            change_color<span style="color: #009900;">(</span> x<span style="color: #339933;">,</span> y <span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
         <span style="color: #b1b100;">else</span> <span style="color: #b1b100;">if</span> <span style="color: #009900;">(</span> x <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">529</span> <span style="color: #339933;">&amp;&amp;</span> x <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">625</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&gt;</span> <span style="color: #0000dd;">40</span> <span style="color: #339933;">&amp;&amp;</span> y <span style="color: #339933;">&lt;</span> <span style="color: #0000dd;">250</span> <span style="color: #009900;">)</span>
&nbsp;
             ch <span style="color: #339933;">=</span> change_shape<span style="color: #009900;">(</span> x<span style="color: #339933;">,</span> y <span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
         temp1 <span style="color: #339933;">=</span> x <span style="color: #339933;">;</span>
&nbsp;
         temp2 <span style="color: #339933;">=</span> y <span style="color: #339933;">;</span>
&nbsp;
         <span style="color: #b1b100;">if</span> <span style="color: #009900;">(</span> ch <span style="color: #339933;">==</span> <span style="color: #ff0000;">'f'</span> <span style="color: #009900;">)</span>
&nbsp;
         <span style="color: #009900;">{</span>
&nbsp;
            hidemouseptr<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
            <span style="color: #b1b100;">while</span><span style="color: #009900;">(</span> button <span style="color: #339933;">==</span> <span style="color: #0000dd;">1</span> <span style="color: #009900;">)</span>
&nbsp;
            <span style="color: #009900;">{</span>
&nbsp;
               line<span style="color: #009900;">(</span>temp1<span style="color: #339933;">,</span>temp2<span style="color: #339933;">,</span>x<span style="color: #339933;">,</span>y<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
               temp1 <span style="color: #339933;">=</span> x<span style="color: #339933;">;</span>
&nbsp;
               temp2 <span style="color: #339933;">=</span> y<span style="color: #339933;">;</span>
&nbsp;
               getmousepos<span style="color: #009900;">(</span><span style="color: #339933;">&amp;</span>button<span style="color: #339933;">,&amp;</span>x<span style="color: #339933;">,&amp;</span>y<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
            <span style="color: #009900;">}</span>
&nbsp;
            showmouseptr<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
         <span style="color: #009900;">}</span>
&nbsp;
         <span style="color: #b1b100;">while</span><span style="color: #009900;">(</span> button <span style="color: #339933;">==</span> <span style="color: #0000dd;">1</span><span style="color: #009900;">)</span>
&nbsp;
            getmousepos<span style="color: #009900;">(</span><span style="color: #339933;">&amp;</span>button<span style="color: #339933;">,&amp;</span>x<span style="color: #339933;">,&amp;</span>y<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
&nbsp;
         <span style="color: #808080; font-style: italic; font-family: Georgia, " times="" new="" roman",="" times,="" serif;"="">/* to avoid interference of mouse while drawing */</span>
&nbsp;
         hidemouseptr<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
         <span style="color: #b1b100;">if</span><span style="color: #009900;">(</span> ch <span style="color: #339933;">==</span> <span style="color: #ff0000;">'p'</span><span style="color: #009900;">)</span>
&nbsp;
            putpixel<span style="color: #009900;">(</span>x<span style="color: #339933;">,</span>y<span style="color: #339933;">,</span>getcolor<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
         <span style="color: #b1b100;">else</span> <span style="color: #b1b100;">if</span> <span style="color: #009900;">(</span> ch <span style="color: #339933;">==</span> <span style="color: #ff0000;">'b'</span> <span style="color: #009900;">)</span>
&nbsp;
         <span style="color: #009900;">{</span>
&nbsp;
            setfillstyle<span style="color: #009900;">(</span>SOLID_FILL<span style="color: #339933;">,</span>getcolor<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
            bar<span style="color: #009900;">(</span>temp1<span style="color: #339933;">,</span>temp2<span style="color: #339933;">,</span>x<span style="color: #339933;">,</span>y<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
         <span style="color: #009900;">}</span>
&nbsp;
         <span style="color: #b1b100;">else</span> <span style="color: #b1b100;">if</span> <span style="color: #009900;">(</span> ch <span style="color: #339933;">==</span> <span style="color: #ff0000;">'l'</span><span style="color: #009900;">)</span>
&nbsp;
            line<span style="color: #009900;">(</span>temp1<span style="color: #339933;">,</span>temp2<span style="color: #339933;">,</span>x<span style="color: #339933;">,</span>y<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
         <span style="color: #b1b100;">else</span> <span style="color: #b1b100;">if</span> <span style="color: #009900;">(</span> ch <span style="color: #339933;">==</span> <span style="color: #ff0000;">'e'</span><span style="color: #009900;">)</span>
&nbsp;
            ellipse<span style="color: #009900;">(</span>temp1<span style="color: #339933;">,</span>temp2<span style="color: #339933;">,</span><span style="color: #0000dd;">0</span><span style="color: #339933;">,</span><span style="color: #0000dd;">360</span><span style="color: #339933;">,</span><span style="color: #000066;">abs</span><span style="color: #009900;">(</span>x<span style="color: #339933;">-</span>temp1<span style="color: #009900;">)</span><span style="color: #339933;">,</span><span style="color: #000066;">abs</span><span style="color: #009900;">(</span>y<span style="color: #339933;">-</span>temp2<span style="color: #009900;">)</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
         <span style="color: #b1b100;">else</span> <span style="color: #b1b100;">if</span> <span style="color: #009900;">(</span> ch <span style="color: #339933;">==</span> <span style="color: #ff0000;">'r'</span> <span style="color: #009900;">)</span>
&nbsp;
            rectangle<span style="color: #009900;">(</span>temp1<span style="color: #339933;">,</span>temp2<span style="color: #339933;">,</span>x<span style="color: #339933;">,</span>y<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
         <span style="color: #b1b100;">else</span> <span style="color: #b1b100;">if</span> <span style="color: #009900;">(</span> ch <span style="color: #339933;">==</span> <span style="color: #ff0000;">'c'</span> <span style="color: #009900;">)</span>
&nbsp;
         <span style="color: #009900;">{</span>
&nbsp;
            ch <span style="color: #339933;">=</span> <span style="color: #ff0000;">'f'</span><span style="color: #339933;">;</span>          <span style="color: #666666; font-style: italic; font-family: Georgia, " times="" new="" roman",="" times,="" serif;"="">// setting to freehand drawing</span>
&nbsp;
            clearviewport<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
            color <span style="color: #339933;">=</span> getcolor<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
            setcolor<span style="color: #009900;">(</span>WHITE<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
            rectangle<span style="color: #009900;">(</span><span style="color: #0000dd;">2</span><span style="color: #339933;">,</span><span style="color: #0000dd;">2</span><span style="color: #339933;">,</span><span style="color: #0000dd;">518</span><span style="color: #339933;">,</span><span style="color: #0000dd;">427</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
            setcolor<span style="color: #009900;">(</span>color<span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
         <span style="color: #009900;">}</span>
&nbsp;
&nbsp;
         showmouseptr<span style="color: #009900;">(</span><span style="color: #009900;">)</span><span style="color: #339933;">;</span>
&nbsp;
      <span style="color: #009900;">}</span>
&nbsp;
   <span style="color: #009900;">}</span>
&nbsp;
<span style="color: #009900;">}</span>
&nbsp;</pre></font></pre>       <div id="socialicon">
       <div class="social1" id="social1">
       <div id="fb-root" class=" fb_reset"><div style="position: absolute; top: -10000px; width: 0px; height: 0px;"><div></div></div></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_US/sdk.js#xfbml=1&version=v2.0";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>
<div class="fb-share-button fb_iframe_widget" data-href="http://www.cprogrammingtutorial.org/cprogram/Write-a-paint-program-in-C/151.html" data-layout="button_count" fb-xfbml-state="rendered" fb-iframe-plugin-query="app_id=&amp;container_width=90&amp;href=http%3A%2F%2Fwww.cprogrammingtutorial.org%2Fcprogram%2FWrite-a-paint-program-in-C%2F151.html&amp;layout=button_count&amp;locale=en_US&amp;sdk=joey"><span style="vertical-align: bottom; width: 77px; height: 20px;"><iframe name="f3f98d205215be" width="1000px" height="1000px" title="fb:share_button Facebook Social Plugin" frameborder="0" allowtransparency="true" allowfullscreen="true" scrolling="no" allow="encrypted-media" src="./p_files/share_button.html" style="border: none; visibility: visible; width: 77px; height: 20px;" class=""></iframe></span></div>
 </div>
 <div class="social2" id="social2">     
 <!-- Place this tag where you want the +1 button to render. -->
<div id="___plusone_0" style="position: absolute; width: 450px; left: -10000px;"><iframe ng-non-bindable="" frameborder="0" hspace="0" marginheight="0" marginwidth="0" scrolling="no" style="position:absolute;top:-10000px;width:450px;margin:0px;border-style:none" tabindex="0" vspace="0" width="100%" id="I0_1585163552048" name="I0_1585163552048" src="./p_files/fastbutton.html" data-gapiattached="true"></iframe></div><div class="g-plusone" data-size="medium" data-href="http://www.cprogrammingtutorial.org/cprogram/Write-a-paint-program-in-C/151.html" data-gapiscan="true" data-onload="true" data-gapistub="true"></div>

<!-- Place this tag after the last +1 button tag. -->
<script type="text/javascript">
  (function() {
    var po = document.createElement('script'); po.type = 'text/javascript'; po.async = true;
    po.src = 'https://apis.google.com/js/platform.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(po, s);
  })();
</script> 
</div>
   <div class="social4" id="social4">
   <iframe id="twitter-widget-0" scrolling="no" frameborder="0" allowtransparency="true" allowfullscreen="true" class="twitter-share-button twitter-share-button-rendered twitter-tweet-button" style="position: static; visibility: visible; width: 60px; height: 20px;" title="Twitter Tweet Button" src="./p_files/tweet_button.d0f13be8321eb432fba28cfc1c3351b1.en.html"></iframe>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?'http':'https';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+'://platform.twitter.com/widgets.js';fjs.parentNode.insertBefore(js,fjs);}}(document, 'script', 'twitter-wjs');</script>
</div>
<div class="social5" id="social5">
<script src="./p_files/in.js.download" type="text/javascript"> lang: en_US</script>
<span class="IN-widget" data-lnkd-debug="&lt;script type=&quot;IN/Share+init&quot; data-url=&quot;http://www.cprogrammingtutorial.org/cprogram/Write-a-paint-program-in-C/151.html&quot; data-counter=&quot;right&quot;&gt;&lt;/script&gt;" style="display: inline-block; line-height: 1; vertical-align: bottom; padding: 0px; margin: 0px; text-indent: 0px; text-align: center;"><span style="padding: 0px !important; margin: 0px !important; text-indent: 0px !important; display: inline-block !important; vertical-align: bottom !important; font-size: 1px !important;"><button class="IN-2bc0215c-7188-4274-b598-1969e06d4d7c-1G9ISYhSF8XoOmdcl0yKDu"><xdoor-icon aria-hidden="true"><svg viewBox="0 0 24 24" width="24px" height="24px" x="0" y="0" preserveAspectRatio="xMinYMin meet">
      <g style="fill: currentColor">
        <rect x="-0.003" style="fill:none;" width="24" height="24"></rect>
        <path style="" d="M20,2h-16c-1.1,0-2,0.9-2,2v16c0,1.1,0.9,2,2,2h16c1.1,0,2-0.9,2-2V4C22,2.9,21.1,2,20,2zM8,19h-3v-9h3V19zM6.5,8.8C5.5,8.8,4.7,8,4.7,7s0.8-1.8,1.8-1.8S8.3,6,8.3,7S7.5,8.8,6.5,8.8zM19,19h-3v-4c0-1.4-0.6-2-1.5-2c-1.1,0-1.5,0.8-1.5,2.2V19h-3v-9h2.9v1.1c0.5-0.7,1.4-1.3,2.6-1.3c2.3,0,3.5,1.1,3.5,3.7V19z"></path>
      </g>
    </svg></xdoor-icon>Share</button></span></span>
</div>
</div>
       <div class="output" id="output">
             ==================================================================<br><strong>OUTPUT of paint program in C</strong><br>==================================================================<br>can't be displayed    </div>       
      </div>
      <div class="ad3" id="ad3">
      <div class="ad6" id="ad6">
          <script async="" src="./p_files/f(4).txt"></script>
<!-- cprogrampage3 -->
<ins class="adsbygoogle" style="display: block; height: 600px;" data-ad-client="ca-pub-5856407216862717" data-ad-slot="2357227964" data-ad-format="auto" data-adsbygoogle-status="done"><ins id="aswift_1_expand" style="display:inline-table;border:none;height:600px;margin:0;padding:0;position:relative;visibility:visible;width:300px;background-color:transparent;"><ins id="aswift_1_anchor" style="display:block;border:none;height:600px;margin:0;padding:0;position:relative;visibility:visible;width:300px;background-color:transparent;"><iframe width="300" height="600" frameborder="0" marginwidth="0" marginheight="0" vspace="0" hspace="0" allowtransparency="true" scrolling="no" allowfullscreen="true" onload="var i=this.id,s=window.google_iframe_oncopy,H=s&amp;&amp;s.handlers,h=H&amp;&amp;H[i],w=this.contentWindow,d;try{d=w.document}catch(e){}if(h&amp;&amp;d&amp;&amp;(!d.body||!d.body.firstChild)){if(h.call){setTimeout(h,0)}else if(h.match){try{h=s.upd(h,i)}catch(e){}w.location.replace(h)}}" id="aswift_1" name="aswift_1" style="left: 0px; position: absolute; top: 0px; border: 0px; width: 300px; height: 600px; overflow: visible;" src="./p_files/saved_resource(1).html"></iframe></ins></ins></ins>
<script>
(adsbygoogle = window.adsbygoogle || []).push({});
</script>
      </div>
      
      <div class="ad7" id="ad7" style="height: auto !important;">
          <script async="" src="./p_files/f(4).txt"></script>
<!-- cprogrampage4 -->
<ins class="adsbygoogle" style="display: block; height: 600px;" data-ad-client="ca-pub-5856407216862717" data-ad-slot="1128192180" data-ad-format="auto" data-adsbygoogle-status="done"><ins id="aswift_2_expand" style="display:inline-table;border:none;height:600px;margin:0;padding:0;position:relative;visibility:visible;width:300px;background-color:transparent;"><ins id="aswift_2_anchor" style="display:block;border:none;height:600px;margin:0;padding:0;position:relative;visibility:visible;width:300px;background-color:transparent;"><iframe width="300" height="600" frameborder="0" marginwidth="0" marginheight="0" vspace="0" hspace="0" allowtransparency="true" scrolling="no" allowfullscreen="true" onload="var i=this.id,s=window.google_iframe_oncopy,H=s&amp;&amp;s.handlers,h=H&amp;&amp;H[i],w=this.contentWindow,d;try{d=w.document}catch(e){}if(h&amp;&amp;d&amp;&amp;(!d.body||!d.body.firstChild)){if(h.call){setTimeout(h,0)}else if(h.match){try{h=s.upd(h,i)}catch(e){}w.location.replace(h)}}" id="aswift_2" name="aswift_2" style="left: 0px; position: absolute; top: 0px; border: 0px; width: 300px; height: 600px; overflow: visible;" src="./p_files/saved_resource(2).html"></iframe></ins></ins></ins>
<script>
(adsbygoogle = window.adsbygoogle || []).push({});
</script>
          
      </div>
      
      </div>
      <div id="page" class="container">
        
      </div>
      <div class="adbot" id="adbot">
           <script async="" src="./p_files/f(4).txt"></script>
<!-- cprogrampage2 -->
<ins class="adsbygoogle" style="display: block; height: 90px;" data-ad-client="ca-pub-5856407216862717" data-ad-slot="1563021042" data-ad-format="link" data-adsbygoogle-status="done"><ins id="aswift_3_expand" style="display:inline-table;border:none;height:90px;margin:0;padding:0;position:relative;visibility:visible;width:768px;background-color:transparent;"><ins id="aswift_3_anchor" style="display:block;border:none;height:90px;margin:0;padding:0;position:relative;visibility:visible;width:768px;background-color:transparent;"><iframe width="768" height="90" frameborder="0" marginwidth="0" marginheight="0" vspace="0" hspace="0" allowtransparency="true" scrolling="no" allowfullscreen="true" onload="var i=this.id,s=window.google_iframe_oncopy,H=s&amp;&amp;s.handlers,h=H&amp;&amp;H[i],w=this.contentWindow,d;try{d=w.document}catch(e){}if(h&amp;&amp;d&amp;&amp;(!d.body||!d.body.firstChild)){if(h.call){setTimeout(h,0)}else if(h.match){try{h=s.upd(h,i)}catch(e){}w.location.replace(h)}}" id="aswift_3" name="aswift_3" style="left:0;position:absolute;top:0;border:0px;width:768px;height:90px;" src="./p_files/saved_resource(3).html"></iframe></ins></ins></ins>
<script>
(adsbygoogle = window.adsbygoogle || []).push({});
</script>
          
          
        <hr>
      </div>
</div>
</div>
<div id="footer">
	<p>Copyright (c) 2015 <a href="http://www.cprogrammingtutorial.org/">C programming tutorial.com</a>. All rights reserved. Design by <a href="http://www.stemsoftwares.com/">Stem Softwares</a>.</p>
</div>

<ins class="adsbygoogle adsbygoogle-noablate" data-adsbygoogle-status="done" style="display: none !important;"><ins id="aswift_4_expand" style="display:inline-table;border:none;height:0px;margin:0;padding:0;position:relative;visibility:visible;width:0px;background-color:transparent;"><ins id="aswift_4_anchor" style="display:block;border:none;height:0px;margin:0;padding:0;position:relative;visibility:visible;width:0px;background-color:transparent;"><iframe frameborder="0" marginwidth="0" marginheight="0" vspace="0" hspace="0" allowtransparency="true" scrolling="no" allowfullscreen="true" onload="var i=this.id,s=window.google_iframe_oncopy,H=s&amp;&amp;s.handlers,h=H&amp;&amp;H[i],w=this.contentWindow,d;try{d=w.document}catch(e){}if(h&amp;&amp;d&amp;&amp;(!d.body||!d.body.firstChild)){if(h.call){setTimeout(h,0)}else if(h.match){try{h=s.upd(h,i)}catch(e){}w.location.replace(h)}}" id="aswift_4" name="aswift_4" style="left:0;position:absolute;top:0;border:0px;width:0px;height:0px;" src="./p_files/saved_resource(4).html"></iframe></ins></ins></ins><iframe id="google_osd_static_frame_4622625714008" name="google_osd_static_frame" style="display: none; width: 0px; height: 0px;" src="./p_files/saved_resource(5).html"></iframe><iframe scrolling="no" frameborder="0" allowtransparency="true" src="./p_files/widget_iframe.d0f13be8321eb432fba28cfc1c3351b1.html" title="Twitter settings iframe" style="display: none;"></iframe><iframe name="oauth2relay912281066" id="oauth2relay912281066" src="./p_files/postmessageRelay.html" tabindex="-1" aria-hidden="true" style="width: 1px; height: 1px; position: absolute; top: -100px;"></iframe></body><iframe id="google_esf" name="google_esf" src="./p_files/zrt_lookup.html" data-ad-client="ca-pub-5856407216862717" style="display: none;"></iframe></html>