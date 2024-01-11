const api = require('../../api/api')

// pages/home/home.js
Page({

  /**
   * 页面的初始数据
   */
  data: {
    types:[]
  },
 
  /**
   * 生命周期函数--监听页面初次渲染完成
   */
  onReady() {
    this.loadHomeData();
  },

loadHomeData() {
  // 加载影院热映
  api.loadHotFilm({
    start:0,
    count:15
  }).then(data =>{
    let type = {
      title:data.subject_collection.name,
      list:data.subject_collection_items,
      method:data.method,
    }
    this.setData({
      'types[0]':type
    })
  }).catch(api.showError)

  // 加载近期热门
  api.loadLatesFilm({
    start:0,
    count:15
  }).then(data =>{
    let type = {
      title:data.subject_collection.name,
      list:data.subject_collection_items,
      method:data.method,
    }
    this.setData({
      'types[1]':type
    })
  }).catch(api.showError)

  // 加载免费电影
  api.loadFreeFilm({
    start:0,
    count:15
  }).then(data =>{
    let type = {
      title:data.subject_collection.name,
      list:data.subject_collection_items,
      method:data.method,
    }
    this.setData({
      'types[2]':type
    })
  }).catch(api.showError)

},

  /**
   * 生命周期函数--监听页面显示
   */
  onShow() {

  },

  /**
   * 生命周期函数--监听页面隐藏
   */
  onHide() {

  },

  /**
   * 生命周期函数--监听页面卸载
   */
  onUnload() {

  },

  /**
   * 页面相关事件处理函数--监听用户下拉动作
   */
  onPullDownRefresh() {

  },

  /**
   * 页面上拉触底事件的处理函数
   */
  onReachBottom() {

  },

  /**
   * 用户点击右上角分享
   */
  onShareAppMessage() {

  }
})