const api = require('../../api/api')
// pages/list/list.js
Page({

  /**
   * 页面的初始数据
   */
  data: {
    method:'',
    films:{},
    start:0,
    count:12
  },

  onLoad: function (options) {
    // console.log(options)
    this.data.method = options.method;
  },

  onReady: function () {
    this.loadListData();
  },

  loadListData () {
    //[this.data.method]在此电脑运行正常,如出错用.loadHotFilm
    api[this.data.method]({
      start:this.data.start,
      count:this.data.count
    }).then(data => {
      let list  = this.data.films.list || [];
      let films = {
        title:data.subject_collection.name,
        list:list.concat(data.subject_collection_items)
      }
      this.setData({
        films:films,
        start:this.data.start+this.data.count,
      });
    }).catch(api.showError);
  },
  /**
   * 页面上拉触底事件的处理函数
   */
  onReachBottom() {
    this.loadListData();
  },
  
})