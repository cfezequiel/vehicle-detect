



<!DOCTYPE html>
<html lang="en" class="   ">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Language" content="en">
    
    
    <title>opencv/objectDetection.cpp at master · Itseez/opencv</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png">
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png">
    <meta property="fb:app_id" content="1401488693436528">

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="Itseez/opencv" name="twitter:title" /><meta content="opencv - Open Source Computer Vision Library" name="twitter:description" /><meta content="https://avatars2.githubusercontent.com/u/1786446?v=2&amp;s=400" name="twitter:image:src" />
<meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://avatars2.githubusercontent.com/u/1786446?v=2&amp;s=400" property="og:image" /><meta content="Itseez/opencv" property="og:title" /><meta content="https://github.com/Itseez/opencv" property="og:url" /><meta content="opencv - Open Source Computer Vision Library" property="og:description" />

    <link rel="assets" href="https://assets-cdn.github.com/">
    <link rel="conduit-xhr" href="https://ghconduit.com:25035">
    <link rel="xhr-socket" href="/_sockets">

    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="selected-link" value="repo_source" data-pjax-transient>
      <meta name="google-analytics" content="UA-3769691-2">

    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="670E3E84:6A42:35A47D8E:5406CCA4" name="octolytics-dimension-request_id" /><meta content="1441551" name="octolytics-actor-id" /><meta content="cfezequiel" name="octolytics-actor-login" /><meta content="5066fb97a2d4c5115deef037e310ebd640c2c65d2f6b31d11768c8a45205913c" name="octolytics-actor-hash" />
    

    
    
    <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">


    <meta content="authenticity_token" name="csrf-param" />
<meta content="ET1qZr5bqrAx6ScFPQybrPLGLxEbpHixhxcHFLMNCJlgY08iyVzPQwx/CyTtlXT/svf1fRZdiIn/kIzW9PRYiQ==" name="csrf-token" />

    <link href="https://assets-cdn.github.com/assets/github-94be269012c9809a709b1dfcded162581897850a.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://assets-cdn.github.com/assets/github2-9a4b8cf72cb9f4d4c17876b198bb3becac384763.css" media="all" rel="stylesheet" type="text/css" />
    


    <meta http-equiv="x-pjax-version" content="3a908fab2862134efff1e4ad679d41c9">

      
  <meta name="description" content="opencv - Open Source Computer Vision Library">
  <meta name="go-import" content="github.com/Itseez/opencv git https://github.com/Itseez/opencv.git">

  <meta content="1786446" name="octolytics-dimension-user_id" /><meta content="Itseez" name="octolytics-dimension-user_login" /><meta content="5108051" name="octolytics-dimension-repository_id" /><meta content="Itseez/opencv" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="5108051" name="octolytics-dimension-repository_network_root_id" /><meta content="Itseez/opencv" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/Itseez/opencv/commits/master.atom" rel="alternate" title="Recent Commits to opencv:master" type="application/atom+xml">

  </head>


  <body class="logged_in  env-production linux vis-public page-blob">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div class="wrapper">
      
      
      
      


      <div class="header header-logged-in true">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/" aria-label="Homepage" ga-data-click="Header, go to dashboard, icon:logo">
  <span class="mega-octicon octicon-mark-github"></span>
</a>


      <div class="site-search repo-scope js-site-search">
          <form accept-charset="UTF-8" action="/Itseez/opencv/search" class="js-site-search-form" data-global-search-url="/search" data-repo-search-url="/Itseez/opencv/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
  <input type="text"
    class="js-site-search-field is-clearable"
    data-hotkey="s"
    name="q"
    placeholder="Search"
    data-global-scope-placeholder="Search GitHub"
    data-repo-scope-placeholder="Search"
    tabindex="1"
    autocapitalize="off">
  <div class="scope-badge">This repository</div>
</form>
      </div>
      <ul class="header-nav left">
        <li class="header-nav-item explore">
          <a class="header-nav-link" href="/explore" data-ga-click="Header, go to explore, text:explore">Explore</a>
        </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://gist.github.com" data-ga-click="Header, go to gist, text:gist">Gist</a>
          </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="/blog" data-ga-click="Header, go to blog, text:blog">Blog</a>
          </li>
        <li class="header-nav-item">
          <a class="header-nav-link" href="https://help.github.com" data-ga-click="Header, go to help, text:help">Help</a>
        </li>
      </ul>

    
<ul class="header-nav user-nav right" id="user-links">
  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link name" href="/cfezequiel" data-ga-click="Header, go to profile, text:username">
      <img alt="cfezequiel" class="avatar" data-user="1441551" height="20" src="https://avatars2.githubusercontent.com/u/1441551?v=2&amp;s=40" width="20" />
      <span class="css-truncate">
        <span class="css-truncate-target">cfezequiel</span>
      </span>
    </a>
  </li>

  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link js-menu-target tooltipped tooltipped-s" href="#" aria-label="Create new..." data-ga-click="Header, create new, icon:add">
      <span class="octicon octicon-plus"></span>
      <span class="dropdown-caret"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      
<ul class="dropdown-menu">
  <li>
    <a href="/new"><span class="octicon octicon-repo"></span> New repository</a>
  </li>
  <li>
    <a href="/organizations/new"><span class="octicon octicon-organization"></span> New organization</a>
  </li>


</ul>

    </div>
  </li>

  <li class="header-nav-item">
        <a href="/notifications" aria-label="You have no unread notifications" class="header-nav-link notification-indicator tooltipped tooltipped-s" data-ga-click="Header, go to notifications, icon:read" data-hotkey="g n">
        <span class="mail-status all-read"></span>
        <span class="octicon octicon-inbox"></span>
</a>
  </li>

  <li class="header-nav-item">
    <a class="header-nav-link tooltipped tooltipped-s" href="/settings/profile" id="account_settings" aria-label="Settings" data-ga-click="Header, go to settings, icon:settings">
      <span class="octicon octicon-gear"></span>
    </a>
  </li>

  <li class="header-nav-item">
    <form accept-charset="UTF-8" action="/logout" class="logout-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="5v/HoIagYJKVKhUcJ9vutV/0O3bOJNJ/qtl6FPjayTfVL3QIi22lHL8om4wZhMchPAIgTksAAXFRCVkNPa8LeQ==" /></div>
      <button class="header-nav-link sign-out-button tooltipped tooltipped-s" aria-label="Sign out" data-ga-click="Header, sign out, icon:logout">
        <span class="octicon octicon-sign-out"></span>
      </button>
</form>  </li>

</ul>


    
  </div>
</div>

      

        


      <div id="start-of-content" class="accessibility-aid"></div>
          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    <div id="js-flash-container">
      
    </div>
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        
<ul class="pagehead-actions">

    <li class="subscription">
      <form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="q3/+kGoSmW0KxCbVDab01YYc8g70w/5zG2FhO9H2WNBck1PC7bA3wT1l1JSbqFCFifwtwybjTMP42ZLXTZ2yhg==" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="5108051" />

    <div class="select-menu js-menu-container js-select-menu">
      <a class="social-count js-social-count" href="/Itseez/opencv/watchers">
        488
      </a>
      <a href="/Itseez/opencv/subscription"
        class="minibutton select-menu-button with-count js-menu-target" role="button" tabindex="0" aria-haspopup="true">
        <span class="js-select-button">
          <span class="octicon octicon-eye"></span>
          Watch
        </span>
      </a>

      <div class="select-menu-modal-holder">
        <div class="select-menu-modal subscription-menu-modal js-menu-content" aria-hidden="true">
          <div class="select-menu-header">
            <span class="select-menu-title">Notifications</span>
            <span class="octicon octicon-x js-menu-close" role="button" aria-label="Close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-list js-navigation-container" role="menu">

            <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input checked="checked" id="do_included" name="do" type="radio" value="included" />
                <h4>Not watching</h4>
                <span class="description">Be notified when participating or @mentioned.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye"></span>
                  Watch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_subscribed" name="do" type="radio" value="subscribed" />
                <h4>Watching</h4>
                <span class="description">Be notified of all conversations.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye"></span>
                  Unwatch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_ignore" name="do" type="radio" value="ignore" />
                <h4>Ignoring</h4>
                <span class="description">Never be notified.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-mute"></span>
                  Stop ignoring
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

</form>
    </li>

  <li>
    
  <div class="js-toggler-container js-social-container starring-container ">

    <form accept-charset="UTF-8" action="/Itseez/opencv/unstar" class="js-toggler-form starred js-unstar-button" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="fchP58gYzdr+/HSNb2G7cTWaVdJ0NyYKcxkmIfrsHyaNUcF4WfdpXFT2djvBxOOXRWZJl6fqTl85sBup3KO8nw==" /></div>
      <button
        class="minibutton with-count js-toggler-target star-button"
        aria-label="Unstar this repository" title="Unstar Itseez/opencv">
        <span class="octicon octicon-star"></span>
        Unstar
      </button>
        <a class="social-count js-social-count" href="/Itseez/opencv/stargazers">
          3,264
        </a>
</form>
    <form accept-charset="UTF-8" action="/Itseez/opencv/star" class="js-toggler-form unstarred js-star-button" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="Eaus1eZd7e4UtFZ+6ujdJc/r9BZPJjCXIqnOcm7s2SzvwX0aoPGqjmrOb65j7KgPkC2G/RnUQn5tslYAshkEiQ==" /></div>
      <button
        class="minibutton with-count js-toggler-target star-button"
        aria-label="Star this repository" title="Star Itseez/opencv">
        <span class="octicon octicon-star"></span>
        Star
      </button>
        <a class="social-count js-social-count" href="/Itseez/opencv/stargazers">
          3,264
        </a>
</form>  </div>

  </li>


        <li>
          <a href="/Itseez/opencv/fork" class="minibutton with-count js-toggler-target fork-button tooltipped-n" title="Fork your own copy of Itseez/opencv to your account" aria-label="Fork your own copy of Itseez/opencv to your account" rel="nofollow" data-method="post">
            <span class="octicon octicon-repo-forked"></span>
            Fork
          </a>
          <a href="/Itseez/opencv/network" class="social-count">3,066</a>
        </li>

</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="mega-octicon octicon-repo"></span>
          <span class="author"><a href="/Itseez" class="url fn" itemprop="url" rel="author"><span itemprop="title">Itseez</span></a></span><!--
       --><span class="path-divider">/</span><!--
       --><strong><a href="/Itseez/opencv" class="js-current-repository js-repo-home-link">opencv</a></strong>

          <span class="page-context-loader">
            <img alt="" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
          </span>

        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">
      <div class="repository-with-sidebar repo-container new-discussion-timeline  ">
        <div class="repository-sidebar clearfix">
            
<div class="sunken-menu vertical-right repo-nav js-repo-nav js-repository-container-pjax js-octicon-loaders" data-issue-count-url="/Itseez/opencv/issues/counts">
  <div class="sunken-menu-contents">
    <ul class="sunken-menu-group">
      <li class="tooltipped tooltipped-w" aria-label="Code">
        <a href="/Itseez/opencv" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-hotkey="g c" data-pjax="true" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /Itseez/opencv">
          <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


      <li class="tooltipped tooltipped-w" aria-label="Pull Requests">
        <a href="/Itseez/opencv/pulls" aria-label="Pull Requests" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-hotkey="g p" data-selected-links="repo_pulls /Itseez/opencv/pulls">
            <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull Requests</span>
            <span class="js-pull-replace-counter"></span>
            <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


    </ul>
    <div class="sunken-menu-separator"></div>
    <ul class="sunken-menu-group">

      <li class="tooltipped tooltipped-w" aria-label="Pulse">
        <a href="/Itseez/opencv/pulse/weekly" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="pulse /Itseez/opencv/pulse/weekly">
          <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped tooltipped-w" aria-label="Graphs">
        <a href="/Itseez/opencv/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_graphs repo_contributors /Itseez/opencv/graphs">
          <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>
    </ul>


  </div>
</div>

              <div class="only-with-full-nav">
                
  
<div class="clone-url open"
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=clone">
  <h3><span class="text-emphasized">HTTPS</span> clone URL</h3>
  <div class="input-group">
    <input type="text" class="input-mini input-monospace js-url-field"
           value="https://github.com/Itseez/opencv.git" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="https://github.com/Itseez/opencv.git" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  
<div class="clone-url "
  data-protocol-type="ssh"
  data-url="/users/set_protocol?protocol_selector=ssh&amp;protocol_type=clone">
  <h3><span class="text-emphasized">SSH</span> clone URL</h3>
  <div class="input-group">
    <input type="text" class="input-mini input-monospace js-url-field"
           value="git@github.com:Itseez/opencv.git" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="git@github.com:Itseez/opencv.git" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  
<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=clone">
  <h3><span class="text-emphasized">Subversion</span> checkout URL</h3>
  <div class="input-group">
    <input type="text" class="input-mini input-monospace js-url-field"
           value="https://github.com/Itseez/opencv" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="https://github.com/Itseez/opencv" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>


<p class="clone-options">You can clone with
      <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>,
      <a href="#" class="js-clone-selector" data-protocol="ssh">SSH</a>,
      or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <a href="https://help.github.com/articles/which-remote-url-should-i-use" class="help tooltipped tooltipped-n" aria-label="Get help on which URL is right for you.">
    <span class="octicon octicon-question"></span>
  </a>
</p>



                <a href="/Itseez/opencv/archive/master.zip"
                   class="minibutton sidebar-button"
                   aria-label="Download the contents of Itseez/opencv as a zip file"
                   title="Download the contents of Itseez/opencv as a zip file"
                   rel="nofollow">
                  <span class="octicon octicon-cloud-download"></span>
                  Download ZIP
                </a>
              </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          

<a href="/Itseez/opencv/blob/0276cc90c2be554fb9811c23ed30f742960f46f2/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:f224b1bed8535e4db1d0cb11e1eb09ab -->

<div class="file-navigation">
  
<div class="select-menu js-menu-container js-select-menu left">
  <span class="minibutton select-menu-button js-menu-target css-truncate" data-hotkey="w"
    data-master-branch="master"
    data-ref="master"
    title="master"
    role="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <span class="octicon octicon-git-branch"></span>
    <i>branch:</i>
    <span class="js-select-button css-truncate-target">master</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-x js-menu-close" role="button" aria-label="Close"></span>
      </div> <!-- /.select-menu-header -->

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div><!-- /.select-menu-tabs -->
      </div><!-- /.select-menu-filters -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/blob/2.4/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4">2.4</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/blob/2.4.8.x-prep/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.8.x-prep"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.8.x-prep">2.4.8.x-prep</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/blob/2.4.9.x-prep/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.9.x-prep"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.9.x-prep">2.4.9.x-prep</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/blob/master/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="master"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="master">master</a>
            </div> <!-- /.select-menu-item -->
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/perf4au/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="perf4au"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="perf4au">perf4au</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/carma_release.0.0.1/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="carma_release.0.0.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="carma_release.0.0.1">carma_release.0.0.1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/3.0-ocl-tp2/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="3.0-ocl-tp2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="3.0-ocl-tp2">3.0-ocl-tp2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/3.0-ocl-tech-preview/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="3.0-ocl-tech-preview"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="3.0-ocl-tech-preview">3.0-ocl-tech-preview</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/3.0.0-alpha/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="3.0.0-alpha"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="3.0.0-alpha">3.0.0-alpha</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.9.1/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.9.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.9.1">2.4.9.1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.9/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.9"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.9">2.4.9</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.8.3/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.8.3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.8.3">2.4.8.3</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.8.2/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.8.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.8.2">2.4.8.2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.8.1/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.8.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.8.1">2.4.8.1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.8/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.8"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.8">2.4.8</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.7-rc1/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.7-rc1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.7-rc1">2.4.7-rc1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.7.2/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.7.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.7.2">2.4.7.2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.7.1/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.7.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.7.1">2.4.7.1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.7/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.7"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.7">2.4.7</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.6.2-rc1/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.6.2-rc1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.6.2-rc1">2.4.6.2-rc1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.6.2r3/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.6.2r3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.6.2r3">2.4.6.2r3</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.6.2r2/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.6.2r2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.6.2r2">2.4.6.2r2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.6.2/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.6.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.6.2">2.4.6.2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.6.1/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.6.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.6.1">2.4.6.1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.6/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.6"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.6">2.4.6</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.5/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.5"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.5">2.4.5</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.4-beta/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.4-beta"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.4-beta">2.4.4-beta</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.4/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.4"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.4">2.4.4</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.3-rc/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.3-rc"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.3-rc">2.4.3-rc</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.3.2/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.3.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.3.2">2.4.3.2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.3.1/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.3.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.3.1">2.4.3.1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.3/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.3">2.4.3</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.2/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.2">2.4.2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.1/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.1">2.4.1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.4.0/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.4.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.4.0">2.4.0</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.3.1/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.3.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.3.1">2.3.1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.3.0/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.3.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.3.0">2.3.0</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Itseez/opencv/tree/2.2/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-name="2.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="2.2">2.2</a>
            </div> <!-- /.select-menu-item -->
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

    </div> <!-- /.select-menu-modal -->
  </div> <!-- /.select-menu-modal-holder -->
</div> <!-- /.select-menu -->

  <div class="button-group right">
    <a href="/Itseez/opencv/find/master"
          class="js-show-file-finder minibutton empty-icon tooltipped tooltipped-s"
          data-pjax
          data-hotkey="t"
          aria-label="Quickly jump between files">
      <span class="octicon octicon-list-unordered"></span>
    </a>
    <button class="js-zeroclipboard minibutton zeroclipboard-button"
          data-clipboard-text="samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
          aria-label="Copy to clipboard"
          data-copied-hint="Copied!">
      <span class="octicon octicon-clippy"></span>
    </button>
  </div>

  <div class="breadcrumb">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/Itseez/opencv" class="" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">opencv</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/Itseez/opencv/tree/master/samples" class="" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">samples</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/Itseez/opencv/tree/master/samples/cpp" class="" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">cpp</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/Itseez/opencv/tree/master/samples/cpp/tutorial_code" class="" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">tutorial_code</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/Itseez/opencv/tree/master/samples/cpp/tutorial_code/objectDetection" class="" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">objectDetection</span></a></span><span class="separator"> / </span><strong class="final-path">objectDetection.cpp</strong>
  </div>
</div>


  <div class="commit file-history-tease">
    <div class="file-history-tease-header">
        <img alt="" class="avatar" height="24" src="https://2.gravatar.com/avatar/2f2f4e775414631f25b806aea2207214?d=https%3A%2F%2Fassets-cdn.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png&amp;r=x&amp;s=140" width="24" />
        <span class="author"><span>vbystricky</span></span>
        <time datetime="2014-07-14T23:16:47+04:00" is="relative-time">July 14, 2014</time>
        <div class="commit-title">
            <a href="/Itseez/opencv/commit/d58f736935d368a7c2884efbe424d5caefe2796c" class="message" data-pjax="true" title="Split highgui module to videoio and highgui">Split highgui module to videoio and highgui</a>
        </div>
    </div>

    <div class="participation">
      <p class="quickstat">
        <a href="#blob_contributors_box" rel="facebox">
          <strong>4</strong>
           contributors
        </a>
      </p>
          <a class="avatar-link tooltipped tooltipped-s" aria-label="taka-no-me" href="/Itseez/opencv/commits/master/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp?author=taka-no-me"><img alt="Andrey Kamaev" class="avatar" data-user="1668548" height="20" src="https://avatars0.githubusercontent.com/u/1668548?v=2&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="CheeseWiz" href="/Itseez/opencv/commits/master/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp?author=CheeseWiz"><img alt="CheeseWiz" class="avatar" data-user="2186434" height="20" src="https://avatars2.githubusercontent.com/u/2186434?v=2&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="berak" href="/Itseez/opencv/commits/master/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp?author=berak"><img alt="berak" class="avatar" data-user="854416" height="20" src="https://avatars1.githubusercontent.com/u/854416?v=2&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="opencv-pushbot" href="/Itseez/opencv/commits/master/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp?author=opencv-pushbot"><img alt="OpenCV Pushbot" class="avatar" data-user="2051563" height="20" src="https://avatars1.githubusercontent.com/u/2051563?v=2&amp;s=40" width="20" /></a>


    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
          <li class="facebox-user-list-item">
            <img alt="Andrey Kamaev" data-user="1668548" height="24" src="https://avatars2.githubusercontent.com/u/1668548?v=2&amp;s=48" width="24" />
            <a href="/taka-no-me">taka-no-me</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="CheeseWiz" data-user="2186434" height="24" src="https://avatars0.githubusercontent.com/u/2186434?v=2&amp;s=48" width="24" />
            <a href="/CheeseWiz">CheeseWiz</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="berak" data-user="854416" height="24" src="https://avatars3.githubusercontent.com/u/854416?v=2&amp;s=48" width="24" />
            <a href="/berak">berak</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="OpenCV Pushbot" data-user="2051563" height="24" src="https://avatars3.githubusercontent.com/u/2051563?v=2&amp;s=48" width="24" />
            <a href="/opencv-pushbot">opencv-pushbot</a>
          </li>
      </ul>
    </div>
  </div>

<div class="file-box">
  <div class="file">
    <div class="meta clearfix">
      <div class="info file-name">
          <span>86 lines (68 sloc)</span>
          <span class="meta-divider"></span>
        <span>2.612 kb</span>
      </div>
      <div class="actions">
        <div class="button-group">
          <a href="/Itseez/opencv/raw/master/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp" class="minibutton " id="raw-url">Raw</a>
            <a href="/Itseez/opencv/blame/master/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp" class="minibutton js-update-url-with-hash">Blame</a>
          <a href="/Itseez/opencv/commits/master/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp" class="minibutton " rel="nofollow">History</a>
        </div><!-- /.button-group -->


              <a class="octicon-button tooltipped tooltipped-n js-update-url-with-hash"
                 aria-label="Clicking this button will fork this project so you can edit the file"
                 href="/Itseez/opencv/edit/master/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
                 data-method="post" rel="nofollow"><span class="octicon octicon-pencil"></span></a>

            <a class="octicon-button danger tooltipped tooltipped-s"
               href="/Itseez/opencv/delete/master/samples/cpp/tutorial_code/objectDetection/objectDetection.cpp"
               aria-label="Fork this project and delete file"
               data-method="post" data-test-id="delete-blob-file" rel="nofollow">
          <span class="octicon octicon-trashcan"></span>
        </a>
      </div><!-- /.actions -->
    </div>
      
  <div class="blob-wrapper data type-c">
      <table class="highlight tab-size-8 js-file-line-container">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code js-file-line"><span class="cp">#include &quot;opencv2/objdetect.hpp&quot;</span></td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code js-file-line"><span class="cp">#include &quot;opencv2/videoio.hpp&quot;</span></td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code js-file-line"><span class="cp">#include &quot;opencv2/highgui.hpp&quot;</span></td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code js-file-line"><span class="cp">#include &quot;opencv2/imgproc.hpp&quot;</span></td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code js-file-line"><span class="cp">#include &lt;iostream&gt;</span></td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code js-file-line"><span class="cp">#include &lt;stdio.h&gt;</span></td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code js-file-line"><span class="k">using</span> <span class="k">namespace</span> <span class="n">std</span><span class="p">;</span></td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code js-file-line"><span class="k">using</span> <span class="k">namespace</span> <span class="n">cv</span><span class="p">;</span></td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code js-file-line"><span class="cm">/** Function Headers */</span></td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code js-file-line"><span class="kt">void</span> <span class="nf">detectAndDisplay</span><span class="p">(</span> <span class="n">Mat</span> <span class="n">frame</span> <span class="p">);</span></td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code js-file-line"><span class="cm">/** Global variables */</span></td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code js-file-line"><span class="n">String</span> <span class="n">face_cascade_name</span> <span class="o">=</span> <span class="s">&quot;haarcascade_frontalface_alt.xml&quot;</span><span class="p">;</span></td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code js-file-line"><span class="n">String</span> <span class="n">eyes_cascade_name</span> <span class="o">=</span> <span class="s">&quot;haarcascade_eye_tree_eyeglasses.xml&quot;</span><span class="p">;</span></td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code js-file-line"><span class="n">CascadeClassifier</span> <span class="n">face_cascade</span><span class="p">;</span></td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code js-file-line"><span class="n">CascadeClassifier</span> <span class="n">eyes_cascade</span><span class="p">;</span></td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code js-file-line"><span class="n">String</span> <span class="n">window_name</span> <span class="o">=</span> <span class="s">&quot;Capture - Face detection&quot;</span><span class="p">;</span></td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code js-file-line"><span class="cm">/** @function main */</span></td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code js-file-line"><span class="kt">int</span> <span class="nf">main</span><span class="p">(</span> <span class="kt">void</span> <span class="p">)</span></td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code js-file-line"><span class="p">{</span></td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code js-file-line">    <span class="n">VideoCapture</span> <span class="n">capture</span><span class="p">;</span></td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code js-file-line">    <span class="n">Mat</span> <span class="n">frame</span><span class="p">;</span></td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code js-file-line">    <span class="c1">//-- 1. Load the cascades</span></td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code js-file-line">    <span class="k">if</span><span class="p">(</span> <span class="o">!</span><span class="n">face_cascade</span><span class="p">.</span><span class="n">load</span><span class="p">(</span> <span class="n">face_cascade_name</span> <span class="p">)</span> <span class="p">){</span> <span class="n">printf</span><span class="p">(</span><span class="s">&quot;--(!)Error loading face cascade</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span> <span class="k">return</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span> <span class="p">};</span></td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code js-file-line">    <span class="k">if</span><span class="p">(</span> <span class="o">!</span><span class="n">eyes_cascade</span><span class="p">.</span><span class="n">load</span><span class="p">(</span> <span class="n">eyes_cascade_name</span> <span class="p">)</span> <span class="p">){</span> <span class="n">printf</span><span class="p">(</span><span class="s">&quot;--(!)Error loading eyes cascade</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span> <span class="k">return</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span> <span class="p">};</span></td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code js-file-line">    <span class="c1">//-- 2. Read the video stream</span></td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code js-file-line">    <span class="n">capture</span><span class="p">.</span><span class="n">open</span><span class="p">(</span> <span class="o">-</span><span class="mi">1</span> <span class="p">);</span></td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code js-file-line">    <span class="k">if</span> <span class="p">(</span> <span class="o">!</span> <span class="n">capture</span><span class="p">.</span><span class="n">isOpened</span><span class="p">()</span> <span class="p">)</span> <span class="p">{</span> <span class="n">printf</span><span class="p">(</span><span class="s">&quot;--(!)Error opening video capture</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">);</span> <span class="k">return</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span> <span class="p">}</span></td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code js-file-line">    <span class="k">while</span> <span class="p">(</span> <span class="n">capture</span><span class="p">.</span><span class="n">read</span><span class="p">(</span><span class="n">frame</span><span class="p">)</span> <span class="p">)</span></td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code js-file-line">    <span class="p">{</span></td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code js-file-line">        <span class="k">if</span><span class="p">(</span> <span class="n">frame</span><span class="p">.</span><span class="n">empty</span><span class="p">()</span> <span class="p">)</span></td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code js-file-line">        <span class="p">{</span></td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code js-file-line">            <span class="n">printf</span><span class="p">(</span><span class="s">&quot; --(!) No captured frame -- Break!&quot;</span><span class="p">);</span></td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code js-file-line">            <span class="k">break</span><span class="p">;</span></td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code js-file-line">        <span class="p">}</span></td>
      </tr>
      <tr>
        <td id="L43" class="blob-num js-line-number" data-line-number="43"></td>
        <td id="LC43" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L44" class="blob-num js-line-number" data-line-number="44"></td>
        <td id="LC44" class="blob-code js-file-line">        <span class="c1">//-- 3. Apply the classifier to the frame</span></td>
      </tr>
      <tr>
        <td id="L45" class="blob-num js-line-number" data-line-number="45"></td>
        <td id="LC45" class="blob-code js-file-line">        <span class="n">detectAndDisplay</span><span class="p">(</span> <span class="n">frame</span> <span class="p">);</span></td>
      </tr>
      <tr>
        <td id="L46" class="blob-num js-line-number" data-line-number="46"></td>
        <td id="LC46" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L47" class="blob-num js-line-number" data-line-number="47"></td>
        <td id="LC47" class="blob-code js-file-line">        <span class="kt">int</span> <span class="n">c</span> <span class="o">=</span> <span class="n">waitKey</span><span class="p">(</span><span class="mi">10</span><span class="p">);</span></td>
      </tr>
      <tr>
        <td id="L48" class="blob-num js-line-number" data-line-number="48"></td>
        <td id="LC48" class="blob-code js-file-line">        <span class="k">if</span><span class="p">(</span> <span class="p">(</span><span class="kt">char</span><span class="p">)</span><span class="n">c</span> <span class="o">==</span> <span class="mi">27</span> <span class="p">)</span> <span class="p">{</span> <span class="k">break</span><span class="p">;</span> <span class="p">}</span> <span class="c1">// escape</span></td>
      </tr>
      <tr>
        <td id="L49" class="blob-num js-line-number" data-line-number="49"></td>
        <td id="LC49" class="blob-code js-file-line">    <span class="p">}</span></td>
      </tr>
      <tr>
        <td id="L50" class="blob-num js-line-number" data-line-number="50"></td>
        <td id="LC50" class="blob-code js-file-line">    <span class="k">return</span> <span class="mi">0</span><span class="p">;</span></td>
      </tr>
      <tr>
        <td id="L51" class="blob-num js-line-number" data-line-number="51"></td>
        <td id="LC51" class="blob-code js-file-line"><span class="p">}</span></td>
      </tr>
      <tr>
        <td id="L52" class="blob-num js-line-number" data-line-number="52"></td>
        <td id="LC52" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L53" class="blob-num js-line-number" data-line-number="53"></td>
        <td id="LC53" class="blob-code js-file-line"><span class="cm">/** @function detectAndDisplay */</span></td>
      </tr>
      <tr>
        <td id="L54" class="blob-num js-line-number" data-line-number="54"></td>
        <td id="LC54" class="blob-code js-file-line"><span class="kt">void</span> <span class="nf">detectAndDisplay</span><span class="p">(</span> <span class="n">Mat</span> <span class="n">frame</span> <span class="p">)</span></td>
      </tr>
      <tr>
        <td id="L55" class="blob-num js-line-number" data-line-number="55"></td>
        <td id="LC55" class="blob-code js-file-line"><span class="p">{</span></td>
      </tr>
      <tr>
        <td id="L56" class="blob-num js-line-number" data-line-number="56"></td>
        <td id="LC56" class="blob-code js-file-line">    <span class="n">std</span><span class="o">::</span><span class="n">vector</span><span class="o">&lt;</span><span class="n">Rect</span><span class="o">&gt;</span> <span class="n">faces</span><span class="p">;</span></td>
      </tr>
      <tr>
        <td id="L57" class="blob-num js-line-number" data-line-number="57"></td>
        <td id="LC57" class="blob-code js-file-line">    <span class="n">Mat</span> <span class="n">frame_gray</span><span class="p">;</span></td>
      </tr>
      <tr>
        <td id="L58" class="blob-num js-line-number" data-line-number="58"></td>
        <td id="LC58" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L59" class="blob-num js-line-number" data-line-number="59"></td>
        <td id="LC59" class="blob-code js-file-line">    <span class="n">cvtColor</span><span class="p">(</span> <span class="n">frame</span><span class="p">,</span> <span class="n">frame_gray</span><span class="p">,</span> <span class="n">COLOR_BGR2GRAY</span> <span class="p">);</span></td>
      </tr>
      <tr>
        <td id="L60" class="blob-num js-line-number" data-line-number="60"></td>
        <td id="LC60" class="blob-code js-file-line">    <span class="n">equalizeHist</span><span class="p">(</span> <span class="n">frame_gray</span><span class="p">,</span> <span class="n">frame_gray</span> <span class="p">);</span></td>
      </tr>
      <tr>
        <td id="L61" class="blob-num js-line-number" data-line-number="61"></td>
        <td id="LC61" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L62" class="blob-num js-line-number" data-line-number="62"></td>
        <td id="LC62" class="blob-code js-file-line">    <span class="c1">//-- Detect faces</span></td>
      </tr>
      <tr>
        <td id="L63" class="blob-num js-line-number" data-line-number="63"></td>
        <td id="LC63" class="blob-code js-file-line">    <span class="n">face_cascade</span><span class="p">.</span><span class="n">detectMultiScale</span><span class="p">(</span> <span class="n">frame_gray</span><span class="p">,</span> <span class="n">faces</span><span class="p">,</span> <span class="mf">1.1</span><span class="p">,</span> <span class="mi">2</span><span class="p">,</span> <span class="mi">0</span><span class="o">|</span><span class="n">CASCADE_SCALE_IMAGE</span><span class="p">,</span> <span class="n">Size</span><span class="p">(</span><span class="mi">30</span><span class="p">,</span> <span class="mi">30</span><span class="p">)</span> <span class="p">);</span></td>
      </tr>
      <tr>
        <td id="L64" class="blob-num js-line-number" data-line-number="64"></td>
        <td id="LC64" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L65" class="blob-num js-line-number" data-line-number="65"></td>
        <td id="LC65" class="blob-code js-file-line">    <span class="k">for</span> <span class="p">(</span> <span class="kt">size_t</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">i</span> <span class="o">&lt;</span> <span class="n">faces</span><span class="p">.</span><span class="n">size</span><span class="p">();</span> <span class="n">i</span><span class="o">++</span> <span class="p">)</span></td>
      </tr>
      <tr>
        <td id="L66" class="blob-num js-line-number" data-line-number="66"></td>
        <td id="LC66" class="blob-code js-file-line">    <span class="p">{</span></td>
      </tr>
      <tr>
        <td id="L67" class="blob-num js-line-number" data-line-number="67"></td>
        <td id="LC67" class="blob-code js-file-line">        <span class="n">Point</span> <span class="n">center</span><span class="p">(</span> <span class="n">faces</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">x</span> <span class="o">+</span> <span class="n">faces</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">width</span><span class="o">/</span><span class="mi">2</span><span class="p">,</span> <span class="n">faces</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">y</span> <span class="o">+</span> <span class="n">faces</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">height</span><span class="o">/</span><span class="mi">2</span> <span class="p">);</span></td>
      </tr>
      <tr>
        <td id="L68" class="blob-num js-line-number" data-line-number="68"></td>
        <td id="LC68" class="blob-code js-file-line">        <span class="n">ellipse</span><span class="p">(</span> <span class="n">frame</span><span class="p">,</span> <span class="n">center</span><span class="p">,</span> <span class="n">Size</span><span class="p">(</span> <span class="n">faces</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">width</span><span class="o">/</span><span class="mi">2</span><span class="p">,</span> <span class="n">faces</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">height</span><span class="o">/</span><span class="mi">2</span> <span class="p">),</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">360</span><span class="p">,</span> <span class="n">Scalar</span><span class="p">(</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">255</span> <span class="p">),</span> <span class="mi">4</span><span class="p">,</span> <span class="mi">8</span><span class="p">,</span> <span class="mi">0</span> <span class="p">);</span></td>
      </tr>
      <tr>
        <td id="L69" class="blob-num js-line-number" data-line-number="69"></td>
        <td id="LC69" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L70" class="blob-num js-line-number" data-line-number="70"></td>
        <td id="LC70" class="blob-code js-file-line">        <span class="n">Mat</span> <span class="n">faceROI</span> <span class="o">=</span> <span class="n">frame_gray</span><span class="p">(</span> <span class="n">faces</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="p">);</span></td>
      </tr>
      <tr>
        <td id="L71" class="blob-num js-line-number" data-line-number="71"></td>
        <td id="LC71" class="blob-code js-file-line">        <span class="n">std</span><span class="o">::</span><span class="n">vector</span><span class="o">&lt;</span><span class="n">Rect</span><span class="o">&gt;</span> <span class="n">eyes</span><span class="p">;</span></td>
      </tr>
      <tr>
        <td id="L72" class="blob-num js-line-number" data-line-number="72"></td>
        <td id="LC72" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L73" class="blob-num js-line-number" data-line-number="73"></td>
        <td id="LC73" class="blob-code js-file-line">        <span class="c1">//-- In each face, detect eyes</span></td>
      </tr>
      <tr>
        <td id="L74" class="blob-num js-line-number" data-line-number="74"></td>
        <td id="LC74" class="blob-code js-file-line">        <span class="n">eyes_cascade</span><span class="p">.</span><span class="n">detectMultiScale</span><span class="p">(</span> <span class="n">faceROI</span><span class="p">,</span> <span class="n">eyes</span><span class="p">,</span> <span class="mf">1.1</span><span class="p">,</span> <span class="mi">2</span><span class="p">,</span> <span class="mi">0</span> <span class="o">|</span><span class="n">CASCADE_SCALE_IMAGE</span><span class="p">,</span> <span class="n">Size</span><span class="p">(</span><span class="mi">30</span><span class="p">,</span> <span class="mi">30</span><span class="p">)</span> <span class="p">);</span></td>
      </tr>
      <tr>
        <td id="L75" class="blob-num js-line-number" data-line-number="75"></td>
        <td id="LC75" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L76" class="blob-num js-line-number" data-line-number="76"></td>
        <td id="LC76" class="blob-code js-file-line">        <span class="k">for</span> <span class="p">(</span> <span class="kt">size_t</span> <span class="n">j</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">j</span> <span class="o">&lt;</span> <span class="n">eyes</span><span class="p">.</span><span class="n">size</span><span class="p">();</span> <span class="n">j</span><span class="o">++</span> <span class="p">)</span></td>
      </tr>
      <tr>
        <td id="L77" class="blob-num js-line-number" data-line-number="77"></td>
        <td id="LC77" class="blob-code js-file-line">        <span class="p">{</span></td>
      </tr>
      <tr>
        <td id="L78" class="blob-num js-line-number" data-line-number="78"></td>
        <td id="LC78" class="blob-code js-file-line">            <span class="n">Point</span> <span class="n">eye_center</span><span class="p">(</span> <span class="n">faces</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">x</span> <span class="o">+</span> <span class="n">eyes</span><span class="p">[</span><span class="n">j</span><span class="p">].</span><span class="n">x</span> <span class="o">+</span> <span class="n">eyes</span><span class="p">[</span><span class="n">j</span><span class="p">].</span><span class="n">width</span><span class="o">/</span><span class="mi">2</span><span class="p">,</span> <span class="n">faces</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">y</span> <span class="o">+</span> <span class="n">eyes</span><span class="p">[</span><span class="n">j</span><span class="p">].</span><span class="n">y</span> <span class="o">+</span> <span class="n">eyes</span><span class="p">[</span><span class="n">j</span><span class="p">].</span><span class="n">height</span><span class="o">/</span><span class="mi">2</span> <span class="p">);</span></td>
      </tr>
      <tr>
        <td id="L79" class="blob-num js-line-number" data-line-number="79"></td>
        <td id="LC79" class="blob-code js-file-line">            <span class="kt">int</span> <span class="n">radius</span> <span class="o">=</span> <span class="n">cvRound</span><span class="p">(</span> <span class="p">(</span><span class="n">eyes</span><span class="p">[</span><span class="n">j</span><span class="p">].</span><span class="n">width</span> <span class="o">+</span> <span class="n">eyes</span><span class="p">[</span><span class="n">j</span><span class="p">].</span><span class="n">height</span><span class="p">)</span><span class="o">*</span><span class="mf">0.25</span> <span class="p">);</span></td>
      </tr>
      <tr>
        <td id="L80" class="blob-num js-line-number" data-line-number="80"></td>
        <td id="LC80" class="blob-code js-file-line">            <span class="n">circle</span><span class="p">(</span> <span class="n">frame</span><span class="p">,</span> <span class="n">eye_center</span><span class="p">,</span> <span class="n">radius</span><span class="p">,</span> <span class="n">Scalar</span><span class="p">(</span> <span class="mi">255</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">0</span> <span class="p">),</span> <span class="mi">4</span><span class="p">,</span> <span class="mi">8</span><span class="p">,</span> <span class="mi">0</span> <span class="p">);</span></td>
      </tr>
      <tr>
        <td id="L81" class="blob-num js-line-number" data-line-number="81"></td>
        <td id="LC81" class="blob-code js-file-line">        <span class="p">}</span></td>
      </tr>
      <tr>
        <td id="L82" class="blob-num js-line-number" data-line-number="82"></td>
        <td id="LC82" class="blob-code js-file-line">    <span class="p">}</span></td>
      </tr>
      <tr>
        <td id="L83" class="blob-num js-line-number" data-line-number="83"></td>
        <td id="LC83" class="blob-code js-file-line">    <span class="c1">//-- Show what you got</span></td>
      </tr>
      <tr>
        <td id="L84" class="blob-num js-line-number" data-line-number="84"></td>
        <td id="LC84" class="blob-code js-file-line">    <span class="n">imshow</span><span class="p">(</span> <span class="n">window_name</span><span class="p">,</span> <span class="n">frame</span> <span class="p">);</span></td>
      </tr>
      <tr>
        <td id="L85" class="blob-num js-line-number" data-line-number="85"></td>
        <td id="LC85" class="blob-code js-file-line"><span class="p">}</span></td>
      </tr>
</table>

  </div>

  </div>
</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" class="js-jump-to-line-form">
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="button">Go</button>
  </form>
</div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer">
    <ul class="site-footer-links right">
      <li><a href="https://status.github.com/">Status</a></li>
      <li><a href="http://developer.github.com">API</a></li>
      <li><a href="http://training.github.com">Training</a></li>
      <li><a href="http://shop.github.com">Shop</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="/about">About</a></li>

    </ul>

    <a href="/" aria-label="Homepage">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
    </a>

    <ul class="site-footer-links">
      <li>&copy; 2014 <span title="0.08927s from github-fe136-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="/site/terms">Terms</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
        <li><a href="/contact">Contact</a></li>
    </ul>
  </div><!-- /.site-footer -->
</div><!-- /.container -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-suggester-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="fullscreen-contents js-fullscreen-contents js-suggester-field" placeholder=""></textarea>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped tooltipped-w" aria-label="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped tooltipped-w"
      aria-label="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-x close js-ajax-error-dismiss" aria-label="Dismiss error"></a>
      Something went wrong with that request. Please try again.
    </div>


      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/frameworks-bc28a4f6b05fd6cd91bbc92310bbbc53e54c6ec2.js" type="text/javascript"></script>
      <script async="async" crossorigin="anonymous" src="https://assets-cdn.github.com/assets/github-26e72320ae9fa3512bdf1f5ceff7201386be144a.js" type="text/javascript"></script>
      
      
        <script async src="https://www.google-analytics.com/analytics.js"></script>
  </body>
</html>

