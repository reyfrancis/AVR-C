/* **** doing this by hand because I don't know this admin ***** */
::-moz-selection {
    background-color: #DD4814;
    color: #fff;
}
::-webkit-selection {
    background-color: #DD4814;
    color: #fff;
}
::selection {
    background-color: #DD4814;
    color: #fff;
}
/* **** background dots **** */
html{
background-image:url(/images/ubuntu-VB4/bg_dotted.gif);
}
body{

margin:0;
padding:0;
}
.above_body, .body_wrapper{
margin:0 16px;
}
.body_wrapper{
-webkit-box-shadow: 0 2px 2px 0 #C2C2C2;
box-shadow: 0 2px 2px 0 #C2C2C2;
}


/* **** Proper fonts **** */
.postbit .postrow{
Ubuntubeta,Ubuntu,Bitstream Vera Sans,DejaVu Sans,Tahoma,sans-serif !important;
}
.postbitlegacy .postrow, .eventbit .eventrow, .postbitdeleted .postrow, .postbitignored .postrow {
    color: #000000;
    font: 13px Ubuntubeta,Ubuntu,Bitstream Vera Sans,DejaVu Sans,Tahoma,sans-serif !important;
}
/* **** Hide main + - button *** */
#collapse_c_cat130{
display:none;
}
/* **** Thread Tools, administrative, etc **** */
.toolsmenu .popupgroup a.popupctrl, .toolsmenu .popupgroup .popupmenu a.popupctrl, .toolsmenu .nopopupgroup li a{
font-size:12px;
}

/* **** New Posts, Private Messages, etc **** */
.navtabs ul li{
margin-right:5px;
padding-right:5px;
border-right:1px solid white;
margin-top:5px;
}
.navtabs ul li:last-child{
border:0;
}
.navtabs ul li ul li{
border:0;
margin:0;
padding-right:0;

}
.navtabs ul li ul li:last-child{
/*border-top:1px solid #DD4814;*/
}
.navtabs li.selected li a, .navbar_advanced_search li a{
line-height:16px;
}

#profile_tabs{
  background-color:#f7f7f7;
}
.memberprofiletabunder{
  height:1px;
    background-color: #CDCDCD;
  }
  dd.userprof_module, dd.userprof_moduleinactive{
    border-width:4px 0 0 0;
    border-radius:0;
    background-color:transparent;
    border-color:transparent;
    background:none;
   
  }
  dd.userprof_moduleinactive a{
    color:#333;

  }
  
  dl.tabslight dd.userprof_module a, dd.userprof_moduleinactive a:hover{
      color:#DD4814 !important;
    }
  
    dd.userprof_module{
    border-top-color:#DD4814 !important;
    
  }
   dd.userprof_moduleinactive:hover{
      border-top-color:transparent !important;
    }
    
    
    
.as-tabs dd, .activitystream_block dd.selected{
      border-width:0 0 2px 0;
background:none transparent;
        border-color:transparent;       
      }
  .activitystream_block dd.selected{
      border-color:#DD4814;
        }
      dl.as-tabs dd.selected a{
      color:#DD4814;
        }


/* **** Title/welcome change **** */

/* **** NO HOME **** */
.breadcrumb .navbithome{
/*display:none;*/
}
/* **** subforum override to prevent one line off the page ***** */

.datacontainer table, .datacontainer table td, .datacontainer table tbody, .datacontainer table tbody tr, .commalist{
width:100% !important;
display:block;
}
.subforumlist.commalist li{
display:block !important;
float:left;
width:30%;
margin-right:3%;
margin-bottom:3px;
min-width:250px; /* for the longest named subforum: Community Announcement & News */
}
.subforum{
white-space:normal !important;
}


/* *** 3 column subforum **** */
.forumlastpost.td div p, .forumlastpost.td div div{
float:left;
 margin-right:10px;
height:18px;
line-height:18px;
}
.forumlastpost.td div div div{
float:none;
}
.forumlastpost.td img{
vertical-align:middle;
}
.forumstats.td{
display:none;
}

.forumbit_post .foruminfo{
width:100%;
}
.forumbit_nopost .forumbit_nopost .forumrow, .forumbit_post .forumrow{
margin-bottom:10px;
-moz-border-radius: 4px;
-webkit-border-radius: 4px;
border-radius: 4px;
-webkit-box-shadow: 0 2px 2px 0 #C2C2C2;
box-shadow: 0 2px 2px 0 #C2C2C2;
}

span.forumthreadpost, span.forumlastpost{
display:none !important;
}

.forumbit_post .forumrow .forumlastpost{
border:1px solid #CCC;
-moz-border-radius: 4px;
-webkit-border-radius: 4px;
border-radius: 4px;
width:90%;
box-sizing:border-box;
padding:5px 1%;
background-color:#FFF;
margin:10px 0;
}
.subforums h4{
display:none;
}
.subforums .commalist{
margin-top:10px;
}
.forumlastpost p.lastposttitle::before{
content:"Last Post - ";
}
.subforum a{
color:#000;
}
.subforum .inlineimg{
vertical-align:bottom;
}


/* *** NO beans on subpages **** */
.forumbit_post .forumstats, .forumbit_post .forumstats_2{
display:none;
}


/* **** annoucement tweaks to make it white copy on yellow (Ubuntu warning color, maybe make red?) **** */
/* http://design.ubuntu.com/web/colour#colour-coded-status */
.announcerow{
border-radius:4px;
color:#FFF !important;
}
.announcerow a{
color:#FFF !important;
text-decoration:underline;
}


/* **** Legend at bottom **** */
.wgo_block .section dl.icon_legends dd {
height:19px;
}


/* **** Profile area on top of post **** */
.postbit .userinfo .popupmenu a.popupctrl, .postbit .userinfo_noavatar .popupmenu a.popupctrl {
font-size:18px;
}
img.onlinestatus{
left:5px;
bottom:0;
top:auto;
}
.postbit .userinfo .usertitle{
margin:10px 0;
}
.imlinks{
margin-top:10px;
}
a.postuseravatarlink {
    display: table-cell;
    vertical-align: middle;
}
.postbit .userinfo .contact, .postbit .userinfo_noavatar .contact {
    position: relative;
    float: left;
    clear: right;
     display:table;
    padding-left: 11px;
width:auto;
}
.postbit .username_container {
margin-left:15px;
}
.postbitlegacy .userinfo .postuseravatar{
float:none;
}
#posts .postbit .userinfo .userinfo_extra dl, .postbit .userinfo_noavatar .userinfo_extra dl{
width:185px;
}
.postbitlegacy .userinfo .userinfo_extra{
margin-top:10px;
float:none;
clear:both;
}
#posts .postbit .userinfo_extra dl dt, .postbitlegacy dl.userinfo_extra dt{
font-weight:bold;
float:none;
}
#posts .postbit .userinfo_extra dl dd, .postbitlegacy dl.userinfo_extra dd{
margin-bottom:7px;
}
/*Note in the above CSS, width: 50% has been removed*/
.postbit .postuseravatarlink {
    clear: right;
    display: table-cell;
float:none;
    padding-left: 11px;
    position: relative;
min-width:110px;
}
/* **** Profile on left *** */
.postbitlegacy .userinfo .rank{
margin:10px 0;
}
.postbitlegacy .userinfo a.username, .eventbit .userinfo a.username{
/* font-size:18px; s.fox fixing issue on smaller screens*/
font-size:16px;
}

/* **** Quote box, should the triangle image change? Don't see that blue in guidelines **** */
.bbcode_container div.bbcode_quote{
border-radius:4px !important;

}
/* removed triangle to look like 'note' class on design.ubuntu.com  */
.bbcode_container div.bbcode_quote, blockquote.preview .bbcode_container div.bbcode_quote{
border: 1px solid #AEA79F;
    border-radius: 4px 4px 4px 4px;
    margin: 18px 0;
    padding: 12px;
background:#FFF;
}
.bbcode_container .bbcode_quote_container, blockquote.preview .bbcode_container .bbcode_quote_container{
display:none;
}

/* *** Report Button **** */
.postbitlegacy .postfoot .textcontrols a.ip, .postbit .postfoot .textcontrols a.ip{
height:16px;
}
.postbit .postfoot .textcontrols a.report, .postbitlegacy .postfoot .textcontrols a.report{
height:16px;
width:35px;
}


/* *** Sticky **** */
#stickies li:last-child{
margin-bottom:20px;
}
ol#stickies > strong{
display:block;
}

ol#stickies{
/*margin-bottom:10px;*/
}
ol#stickies:before,
ol#stickies:after {
    content:"";
    display:table;
}
ol#stickies:after {
    clear:both;
}
/* For IE 6/7 (trigger hasLayout) */
ol#stickies {
    zoom:1;
}

ol#threads, ol#stickies{
border-top:1px solid #C2C2C2;
}


.threadbit .nonsticky, .threadbit .discussionrow{
 background-color:#FFF;
}
.threadbit .sticky{
background-color:#EFEFEF;
/*background-color:#19B6EE;*/
}
/*
.threadbit .sticky{
color:#FFF;
}
.threadbit .sticky .title, .threadbit .sticky .username{
color:#FFF;
text-decoration:underline;
}
*/

.threadbit .alt{
background:none;
}

/* **** Gallery report button fix ****  */
.toolsmenu li a.report.menuimage{
background-image:none;

}



/* **** Posts **** */
/* http://design.ubuntu.com/web/rounded-corners-and-drop-shadows */
.postbit.postbitim.postcontainer, .postbit, .postbitlegacy, .eventbit{
box-shadow: 0 2px 2px 0 #C2C2C2;
margin-bottom:26px;
}
.postbitlegacy .postrow.has_after_content{
padding-bottom:0;
}
/* **** > Following thread titile **** */ 
/* http://design.ubuntu.com/web/links */
.threadtitle .title::after {
content: " \203A";
}

/* **** Sign up (other forms?) **** */
/* http://design.ubuntu.com/web/forms */

.formcontrols .blockrow label{
font-weight:bold;
}
.formcontrols input.textbox{
-moz-border-radius: 2px;
-webkit-border-radius: 2px;
border-radius: 2px;
background: #FFF;
border: 1px solid #999;
font-size: 13px;
padding: 4px;
}
.formcontrols input.textbox:focus{
border-color: #000;
background:#FFF !important;
}
.newcontent_textcontrol, .actionbuttons .group .button{
color:#FFF;

border-radius:4px;
font-size:16px;
padding:7px 10px;
font-weight:normal;
border:0;

background:#DD4814;
background: -moz-linear-gradient(top, #dd4814 0%, #c03f11 100%); /* FF3.6+ */
background: -webkit-gradient(linear, left top, left bottom, color-stop(0%,#dd4814), color-stop(100%,#c03f11)); /* Chrome,Safari4+ */
background: -webkit-linear-gradient(top, #dd4814 0%,#c03f11 100%); /* Chrome10+,Safari5.1+ */
background: -o-linear-gradient(top, #dd4814 0%,#c03f11 100%); /* Opera 11.10+ */
background: -ms-linear-gradient(top, #dd4814 0%,#c03f11 100%); /* IE10+ */
background: linear-gradient(to bottom, #dd4814 0%,#c03f11 100%); /* W3C */

}
.newcontent_textcontrol:hover, .actionbuttons .group .button:hover{
background:#DD4814;
color:#FFF;
}


.above_threadlist, .above_postlist, #above_postlist{
height:35px;
}

#usercp_nav li a{
padding-left:28px;
}

/* **** Search **** */
#searchtypeswitcher li.selected a{
background-color:#DD4814;
color:#FFF;
}


/* **** Notice tweaks **** */
#notices{
margin-top:5px;
}
#notices li{
box-shadow: 0 2px 2px 0 #C2C2C2;
border-radius: 4px;
}

/* **** Poll **** */
#pollinfo{
-webkit-box-shadow: 0 2px 2px 0 #C2C2C2;
box-shadow: 0 2px 2px 0 #C2C2C2;

margin-top:5px;
}
/* **** Remove big (un)read icon **** */
.foruminfo .forumicon{
display:none;
}
.forumbit_post .foruminfo .forumdata .datacontainer{
padding-left:10px;
width:100%;
}


/* **** CODE BLOCKS **** */
.bbcode_code, pre, code, kbd, samp, tt, bbcode_code span{
font-family: 'Ubuntu Mono', monospace;
/*color:#FFF !important;*/
}
.bbcode_code {
word-wrap:normal;
font-style:normal;
}
.bbcode_container div.bbcode_code, .bbcode_container pre.bbcode_code{
/*background-color:#772953;*/
background-color:#EFEFEF;
font-size:14px;
overflow:auto;
}


/* **** advanced search *** */
#userfield_body{
top:25px !important;
}
#searchbits .threadbit .threadlastpost dd{
height:auto;
#}


#/* MAKING SOME TWEAKS. */

#/*SEASONAL CURSOR */

#a.logo-image:hover{
#cursor: url("https://i.imgur.com/GljsZSe.png"), pointer;
#}


/* SSO Login Pretty */
.toplinks .logindetails{
background-color: transparent;
padding-top: 1px;
padding-right: 3px;
}
.loginbutton, .loginbutton:link, .loginbutton:visited{
color: rgb(255, 255, 255);
padding: 0.1em 0.75em;
background-color: #dd4814;
background: linear-gradient(rgb(243, 148, 85) 0%, rgb(239, 94, 31) 5%, rgb(221, 72, 20) 100%) repeat scroll 0% 0% transparent;
border: 1px solid rgb(173, 46, 3);
display: inline-block;
text-decoration: none;
font-size: 108%;
line-height: 1.5em;
border-radius: 3px 3px 3px 3px;
text-align: right;
float: right;
cursor: pointer;
}

/*WELCOME MEMBER TEXT*
.welcomelink {
position: absolute;
}



/*FIX FOR THE NAV MENU */
#vbmenu_qlinks li, #menu_mja2_174 li, #menu_mja2_686 li, #menu_mja2_593 li, #menu_mtaz_185 li, #menu_ode5_930 li, #menu_ndaz_199 li
{
border-left:1px solid #DD4814;
border-right:1px solid #DD4814;
border-top:1px solid #DD4814;
background-color: #ffeb90;
}
#vbmenu_qlinks li:last-child, #menu_mja2_174 li:last-child, #menu_mja2_686 li:last-child, #menu_mja2_593 li:last-child, #menu_mtaz_185 li:last-child, #menu_ode5_930 li:last-child, #menu_ndaz_199 li:last-child 
{
border-bottom:1px solid #DD4814;
}

/*SETTING THREAD LINKS TO BLACK */
a.title{
color:#000000;
}

/*MAKING THREAD CREATOR INFO ITALIC*/
.author .label{
font-style:italic;
}

/*ADJUSTING FACEBOOK LIKE PAGE BUTTON */

/* **** MOBILE STUFFS **** */
.forumbits.ui-listview table td:first-child{
width:100% !important;
}
.ui-content{
overflow:visible;
}

.ui-bar-b, .ui-bar-b input, .ui-bar-b select, .ui-bar-b textarea, .ui-bar-b button, .ui-btn-up-d, .ui-btn-hover-d, .ui-btn-down-d, .ui-body-d, .ui-body-d input, .ui-body-d select, .ui-body-d textarea, .ui-body-d button{
font-family: Ubuntubeta,Ubuntu,Bitstream Vera Sans,DejaVu Sans,Tahoma,sans-serif;
}

.ui-mobile-viewport .subforum{
position:relative;
padding-left:40px;
}
.ui-mobile-viewport .subforum h3 a:visited, #footer-links a:visited{
color:#DD4814;
}
.ui-mobile-viewport #header a:after{
content: "";
}

.ui-body-d .ui-link{
color:#DD4814;
}
.ui-body-d .ui-link::after {
content: " \203A";
}
.ui-bar-b{
background:linear-gradient(#DD4814, #DD4814) repeat scroll 0 0 #DD4814;
}

/* **** cyb subforum font size fix ***** */
.subforum {
font-size:13px;
}

#standarderror2{
    position: relative;
    left: -9999px;
height: 20px;
}
#pleaseRegister{
position: relative;
    left: 9999px;
}


/*RESIZE FORUM AND PREFIX BOX IN ADVANCED SEARCH */

#forumchoice {
resize:both;
}
#prefixchoice {
resize:both;
}