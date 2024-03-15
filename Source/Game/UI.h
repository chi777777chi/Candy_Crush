
#include "../Library/gameutil.h"
#include "../Library/gamecore.h"
#include <list>
#include <vector>
#include <map>
#include <cstdlib>
#include <ctime>
using namespace std;

namespace game_framework {
	class UI{
	public:
		
		void START_UI() {
			start_loading.LoadBitmapByString({ "resources/Start.bmp","resources/Start_loading.bmp","resources/Start_UI.bmp" }, RGB(255, 255, 255));
			start_loading.SetTopLeft(0, 0);
			start_loading.SetAnimation(1000, true);
			play.LoadBitmapByString({ "resources/play.bmp" });
			play.SetTopLeft(600, 770);
			start_loading.ToggleAnimation();
		}
		void Rank_choose_UI() {
			rank_choose_map.LoadBitmapByString({ "resources/map_level2.bmp" });
			rank_choose_map.SetTopLeft(0, 0);
			rank_choose_arrow.LoadBitmapByString({ "resources/arrow.bmp" },RGB(255, 255, 255));
			rank_choose_arrow.SetTopLeft(0, 0);
			rank_1.LoadBitmapByString({ "resources/rank_1.bmp" }, RGB(255,255,255));
			rank_1.SetTopLeft(0, 0);
		}
		void start_ui_show() {
			start_loading.ShowBitmap();	
		}
		void rankchoose_ui_show() {
			rank_choose_map.ShowBitmap();
			//rank_choose_arrow.ShowBitmap();
			rank_1.ShowBitmap();
		}
		bool IS_PLAY_BUTTON(CPoint point) {

				return (600 > point.x && point.x > 150) && (800 > point.y && point.y > 640) && start_loading.GetFrameIndexOfBitmap() == 2;
			
		}
	
	private:
		CMovingBitmap play;								// csieªºlogo
		CMovingBitmap start_loading;
		CMovingBitmap start_ui;
		CMovingBitmap rank_choose_map;
		CMovingBitmap rank_choose_arrow;
		CMovingBitmap rank_1;
		//map_level.ShowBitmap();
		//map_arrow.ShowBitmap();
	};
}


