// pages/page2/page2.js
Page({

  /**
   * 页面的初始数据
   */
  data: {
    imgUrls: [
      'http://img95.699pic.com/photo/40016/9836.jpg_wh300.jpg!/fh/300',
      'https://ss2.baidu.com/6ONYsjip0QIZ8tyhnq/it/u=4259354312,2274079156&fm=173&app=25&f=JPEG?w=500&h=459&s=56360764415EE5CE8C9DA1D20100C0B1',
      'http://www.08160.cn/uploads/allimg/161026/23-161026140529.jpg'
      
      ],
      indicatorDots: false,
      autoplay: true,
      circular: true,
      interval: 5000,
      duration: 1000
  },

  navigate: function() {
      wx.navigateTo({
          url: '../page21/page21',
      })
  },

  /**
   * 生命周期函数--监听页面加载
   */
  onLoad: function (options) {

  },

  /**
   * 生命周期函数--监听页面初次渲染完成
   */
  onReady: function () {

  },

  /**
   * 生命周期函数--监听页面显示
   */
  onShow: function () {

  },

  /**
   * 生命周期函数--监听页面隐藏
   */
  onHide: function () {

  },

  /**
   * 生命周期函数--监听页面卸载
   */
  onUnload: function () {

  },

  /**
   * 页面相关事件处理函数--监听用户下拉动作
   */
  onPullDownRefresh: function () {

  },

  /**
   * 页面上拉触底事件的处理函数
   */
  onReachBottom: function () {

  },

  /**
   * 用户点击右上角分享
   */
  onShareAppMessage: function () {

  }
})