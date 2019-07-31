/* Modernizr 2.6.1 (Custom Build) | MIT & BSD
 * Build: http://modernizr.com/download/#-boxshadow-cssclasses-testprop-testallprops-domprefixes
 */
;window.Modernizr=function(a,b,c){function x(a){j.cssText=a}function y(a,b){return x(prefixes.join(a+";")+(b||""))}function z(a,b){return typeof a===b}function A(a,b){return!!~(""+a).indexOf(b)}function B(a,b){for(var d in a){var e=a[d];if(!A(e,"-")&&j[e]!==c)return b=="pfx"?e:!0}return!1}function C(a,b,d){for(var e in a){var f=b[a[e]];if(f!==c)return d===!1?a[e]:z(f,"function")?f.bind(d||b):f}return!1}function D(a,b,c){var d=a.charAt(0).toUpperCase()+a.slice(1),e=(a+" "+n.join(d+" ")+d).split(" ");return z(b,"string")||z(b,"undefined")?B(e,b):(e=(a+" "+o.join(d+" ")+d).split(" "),C(e,b,c))}var d="2.6.1",e={},f=!0,g=b.documentElement,h="modernizr",i=b.createElement(h),j=i.style,k,l={}.toString,m="Webkit Moz O ms",n=m.split(" "),o=m.toLowerCase().split(" "),p={},q={},r={},s=[],t=s.slice,u,v={}.hasOwnProperty,w;!z(v,"undefined")&&!z(v.call,"undefined")?w=function(a,b){return v.call(a,b)}:w=function(a,b){return b in a&&z(a.constructor.prototype[b],"undefined")},Function.prototype.bind||(Function.prototype.bind=function(b){var c=this;if(typeof c!="function")throw new TypeError;var d=t.call(arguments,1),e=function(){if(this instanceof e){var a=function(){};a.prototype=c.prototype;var f=new a,g=c.apply(f,d.concat(t.call(arguments)));return Object(g)===g?g:f}return c.apply(b,d.concat(t.call(arguments)))};return e}),p.boxshadow=function(){return D("boxShadow")};for(var E in p)w(p,E)&&(u=E.toLowerCase(),e[u]=p[E](),s.push((e[u]?"":"no-")+u));return e.addTest=function(a,b){if(typeof a=="object")for(var d in a)w(a,d)&&e.addTest(d,a[d]);else{a=a.toLowerCase();if(e[a]!==c)return e;b=typeof b=="function"?b():b,f&&(g.className+=" "+(b?"":"no-")+a),e[a]=b}return e},x(""),i=k=null,e._version=d,e._domPrefixes=o,e._cssomPrefixes=n,e.testProp=function(a){return B([a])},e.testAllProps=D,g.className=g.className.replace(/(^|\s)no-js(\s|$)/,"$1$2")+(f?" js "+s.join(" "):""),e}(this,this.document);;
// syze v1.1.1 MIT/GPL2 @rezitech
(function(a,b){function j(){var f=/^device$/i.test(String(e))?!a.orientation||orientation==180?screen.width:screen.height:/^browser$/i.test(String(e))?b.clientWidth:e instanceof String?Function("return "+e)():parseInt(e,10)||0,h=b.className.replace(/^\s+|(^|\s)(gt|is|lt)[^\s]+|\s+$/g,"").split(/\s+/),i=[],j=-1,k,l=c,m=l.length;l.sort(function(a,b){return a-b});while(++j<m)if(f<l[j])break;f=l[Math.max(Math.min(--j,m-1),0)];j=-1;while(++j<m){i.push((f>l[j]?"gt":f<l[j]?"lt":"is")+(d[l[j]]||l[j]))}b.className=(!h[0]?[]:h).concat(i).join(" ");if(g)g(f)}function i(a){var b;return function(){function e(){a.apply(c,d);b=null}var c=this,d=arguments;if(b)clearTimeout(b);b=setTimeout(e,f)}}function h(b,c){if(a.addEventListener)addEventListener(b,c,false);else attachEvent("on"+b,c)}var c=[],d={},e="browser",f=50,g;a.syze={sizes:function(a){c=[].concat.apply([],arguments);j();return this},names:function(a){if(a instanceof Object){d=a;j()}return this},from:function(a){e=a;j();return this},debounceRate:function(a){f=parseInt(a,10)||0;j();return this},callback:function(a){if(a instanceof Function){g=a;j()}return this}};h("resize",i(j));h("orientationchange",j);j()})(this,document.documentElement);
(function ($) {
	
	
	/**
	 * test 123 sun
	 */
	 
  Drupal.behaviors.responsiveFix = {
    attach: function (context) {
      $('body').once('ios7-fix').on('touchstart', function() {});  
    }
  };
  /**
   * Mobile menu toggle.
   */
  Drupal.behaviors.mobileMenu = {
    attach: function (context) {
      $('.avr-menu-toggle').once('mobile-menu', function () {
        $(this).click(function () {
          $('html').toggleClass('submenu-active');
        });
      });
    }
  };

    Drupal.behaviors.pjogetPagePlaceholderLabel= {
      attach: function (context, settings) {
//        if ($('.forum-node-create-links-top').length && $('.view-filters').length) {
//          $('.forum-node-create-links-top').insertBefore('.view-filters');
//        }
        
        if ($('.select-forum-top').length && $('.view-filters').length) {
          $('.select-forum-top').insertBefore('.view-filters');  
        }
        
        if ($('.pane-forum-mark-read.forum-node-create-links').length && $('.pane-avrfreaks-select.select-forum-top').length) {
          $('.pane-forum-mark-read.forum-node-create-links').insertBefore('.pane-avrfreaks-select.select-forum-top');  
        }
        
        if ($('.forum-node-create-links .forum-add-node.forum-add-forum a span').length) {
          $('.forum-node-create-links .forum-add-node.forum-add-forum a span').text('Start a New Topic');  
        }
        
        if ($('td.views-field-topic-icon a[name="new"]').length) {
          $('td.views-field-topic-icon a[name="new"]').each(function() {
            $(this).parents().eq(1).addClass('new-topic');
          });
        }

        if ($('.confirmation.form').length) {
          $('.forum-node-create-links').hide();
          $('.pane-avrfreaks-social-avr-forum-legend').hide();
          $('.pane-avrfreaks-select').hide();
        }

        if ($(".fieldset-outer-wrapper #edit-operation").length && $("#forum-topic-list").length) {
          $(".fieldset-outer-wrapper").clone().appendTo("#forum-topic-list").addClass("fieldset-outer-wrapper-after");
          $('.fieldset-outer-wrapper').eq(0).addClass('fieldset-outer-wrapper-before');
          
          $('.fieldset-outer-wrapper-before #edit-operation').on('change', function() {
            var tval = $(this).val();
            $(".fieldset-outer-wrapper-after #edit-operation").val(tval);
          });
        
          $('.fieldset-outer-wrapper-after #edit-operation').on('change', function() {
            var tval = $(this).val();
            $(".fieldset-outer-wrapper-before #edit-operation").val(tval);
          });
          
        }
        
      }
    }

    Drupal.behaviors.iframeHeight = {
      attach: function (context, settings) {

        var iframe,
          iframeTabs,
          iframeContent,
          pageHeight = $(window).height() - 161,
          iframeHeight,
          changeIframeHeight;

        iframeHeight = function (iframeContent, pageHeight) {
          return iframeContent.height() < pageHeight ? iframeContent.height() : pageHeight;
        }

        changeIframeHeight = function (iframe, iframeContent, pageHeight) {
          iframe.css('height', iframeHeight(iframeContent, pageHeight));
          $('body').scroll();
        }

          $('.ui-dialog iframe').on("load", function() {
            iframe = $('.ui-dialog iframe'),
              iframeTabs = iframe.contents().find('#media-tabs-wrapper li a'),
              iframeContent = iframe.contents().find('#media-browser-page-wrapper');

            changeIframeHeight(iframe, iframeContent, pageHeight);
            iframeTabs.click(function(){
              changeIframeHeight(iframe, iframeContent, pageHeight);
            });
            $(window).resize( function() {
              changeIframeHeight(iframe, iframeContent, pageHeight);
            });
          });

    }
  }
})(jQuery);;
