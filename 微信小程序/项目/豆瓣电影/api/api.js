//第一步
//各个条目链接
const URLS = {
  hotUrl: 'https://m.douban.com/rexxar/api/v2/subject_collection/movie_showing/items',
  latesUrl: 'https://m.douban.com/rexxar/api/v2/subject_collection/movie_latest/items',
  freeUrl: 'https://m.douban.com/rexxar/api/v2/subject_collection/movie_free_stream/items'
}
// 页面数据报错功能
const showError = function(error) {
  wx.showToast({
    title: '数据加载失败',
    image:'/imgs/error.png'
  })
}
//第二步
// 1影院热映
const loadHotFilm = function(params = {}){
  // 返回promise对象
  return new Promise((resolve,reject)=>{
    wx.request({
      url:URLS.hotUrl,
      data:params,
      success:resolve,
      fail:reject
    })
  }).then(res => {
    if(res.statusCode == 200){
      res.data.method = 'loadHotFilm';
      return res.data
    }else{
      // 将状态resolve转换为reject
      Promise.reject({
        message:res.errMsg
      })
    }
  })
}

// 2近期热门
const loadLatesFilm = function(params = {}){
  // 返回promise对象
  return new Promise((resolve,reject)=>{
    wx.request({
      url:URLS.latesUrl,
      data:params,
      success:resolve,
      fail:reject
    })
  }).then(res => {
    if(res.statusCode == 200){
      res.data.method = 'loadLatesFilm';
      return res.data
    }else{
      // 将状态resolve转换为reject
      Promise.reject({
        message:res.errMsg
      })
    }
  })
}

// 3免费在线
const loadFreeFilm = function(params = {}){
  // 返回promise对象
  return new Promise((resolve,reject)=>{
    wx.request({
      url:URLS.freeUrl,
      data:params,
      success:resolve,
      fail:reject
    })
  }).then(res => {
    if(res.statusCode == 200){
      res.data.method = 'loadFreeFilm';
      return res.data
    }else{
      // 将状态resolve转换为reject
      Promise.reject({
        message:res.errMsg
      })
    }
  })
}

module.exports = {
  showError,
  loadHotFilm,
  loadLatesFilm,
  loadFreeFilm
}