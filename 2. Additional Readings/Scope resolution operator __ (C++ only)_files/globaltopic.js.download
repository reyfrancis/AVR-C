 //globaltopic.js placeholder

 (function(window) {
	window.bindPageViewWithAnalytics = window.bindPageViewWithAnalytics || function(){};
	window.digitalData = window.digitalData || {};
	window.digitalData.page = window.digitalData.page || {};
	window.digitalData.page.pageInfo = window.digitalData.page.pageInfo || {};
	window.digitalData.page.pageInfo.ibm = window.digitalData.page.pageInfo.ibm || {};

	function addJSTag (src) {
		var s = document.createElement("script");
		s.type = "text/javascript";
		s.src = src;
		document.getElementsByTagName("head")[0].appendChild(s);
	}
	
	function addIDATracking() {
		window.digitalData.page.pageInfo.ibm['siteID'] = 'ESTKCS';
		window.digitalData.page['category'] = {primaryCategory: 'ELSKCS'};
		window.digitalData.page.pageInfo.ibm['owner'] = 'IBM Knowledge Center/Pittsburgh/IBM';
		window.digitalData.page.pageInfo.pageID = window.location.href.replace(/http:\/\/|https:\/\//gi, '').replace(/(\?|&)view=embed.*$/, '');
		window.digitalData.page.pageInfo.language = document.querySelector("html").getAttribute("lang") || "en-US";
		window.digitalData.page.pageInfo.ibm.country = window.digitalData.page.pageInfo.language.split("-")[1] || 'US';

		//check if ida_stats.js hasn't been already loaded
		if (!window.isIdaStatsLoaded) addJSTag("//1.www.s81c.com/common/stats/ida_stats.js");
	}
	
	//comment out for testing puposes to track IDA only from jsp
	//addIDATracking();
	
	//check if family page has new layout, if not, it will be applied on it
	var shortdesc = document.getElementsByClassName('shortdesc')[0];
	var isFamilyPage = document.getElementsByClassName('kc-product-family-header').length > 0;
	if (typeof shortdesc !== 'undefined' && isFamilyPage && shortdesc.parentNode.nodeName === 'DIV') {
		var shortdescClone = shortdesc.cloneNode(true);
		document.getElementsByTagName('body')[0].insertBefore(shortdescClone, document.getElementsByClassName('kc-cards')[0]);
		shortdesc.parentNode.removeChild(shortdesc);
	}

})(window);
