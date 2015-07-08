### demo6_PhotoRiver

图片流动显示的demo，可以点击流动中的图片放大显示，双击空白处图片以九宫格排列。

demo中为每个显示在视图窗口中的图片创建一个对象，然后使用手动方式对图片进行布局。

更合理的实现方式应该是使用自定义UICollectionViewCell，充分发挥其重用机制，并使用自动布局。
####效果图
![demo6_PhotoRiver](https://github.com/debolee/demo6_PhotoRiver/blob/master/PhotoRiver.gif)