
if( document.images )
{
  navim = new Array();
  navim[0] = "images/nav_unselected.gif";
  navim[1] = "images/nav_selected.gif";

  im = new Array();
  for(var i = 0; i < navim.length; i++) {
    im[i] = new Image();
    im[i].src = navim[i];
  }
}

function navi(flag, imgname) {
  if( flag == 0 ) {
    imgname.src = im[0].src;
  } else {
    imgname.src = im[1].src;
  }
}
