#pragma once
enum TrafficState {
	TrafficState_None=-1,//未登録
	Green = 0,//まったくない
	Orange=1,//少しだけ
	Red=2,//やや
	Purple = 3//激しい
};