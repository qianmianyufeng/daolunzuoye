Page({
  /**
   * 页面的初始数据
   */
  data: {
    focus: false,
    Length: 6,        //输入框个数  
    isFocus: true,    //聚焦  
    Value: "",        //输入的内容  
    ispassword: false, //是否密文显示 true为密文， false为明文。
    x:0,
y:0
  },

  /**
   * 生命周期函数--监听页面加载
   */
  onLoad: function (options) {
  
  },
  password_input: function (e) {
    var that = this;
    console.log(e.detail.value);
    var inputValue = e.detail.value;
    that.setData({
      Value: inputValue
    })
  },

  Tap() {
    var that = this;
    that.setData({
      isFocus: true,
    })
  },
  onShow: function () {
    wx.getStorage({
      key: 'shuju',
      success(res){
        console.log(res.data)
      }
    }) 
  },

  getFocus: function () {
    this.setData({
      focus: !this.data.focus
    })
  },
})