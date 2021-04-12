
#ifndef EXAMPLEWINDOW_H_
#define EXAMPLEWINDOW_H_

#include "Window.h"

class ExampleWindow: public Window
{
protected:
	std::shared_ptr<SDL_Texture> _skying;
	std::shared_ptr<SDL_Texture> _sun;
	std::shared_ptr<SDL_Texture> _cloud1;
	std::shared_ptr<SDL_Texture> _cloud3;
	std::shared_ptr<SDL_Texture> _cloud2;
	std::shared_ptr<SDL_Texture> _field;
	std::shared_ptr<SDL_Texture> _field1;
	std::shared_ptr<SDL_Texture> _mounts;
	std::shared_ptr<SDL_Texture> _mounts1;
	std::shared_ptr<SDL_Texture> _road;
	std::shared_ptr<SDL_Texture> _stolbiki;
	std::shared_ptr<SDL_Texture> _car;
	std::shared_ptr<SDL_Texture> _woods;
	std::shared_ptr<SDL_Texture> _bush;
	std::shared_ptr<SDL_Texture> _flower;
	std::shared_ptr<SDL_Texture> _sign;
	std::shared_ptr<SDL_Texture> _plane;
	int _car_x, _car_y ,_sun_x, _sun_y,
	_mounts_x, _mounts_y, _mounts_x1, _mounts_y1,_cloud1_x,_cloud1_y,_cloud3_x,_cloud3_y,
	_cloud2_x,_cloud2_y,_road_x,_road_y,_road1_x,_road1_y,
	_field_x,_field_y,_field1_x,_field1_y,
	_stolbiki_rect11_x,_stolbiki_rect12_x,_stolbiki_rect13_x,_stolbiki_rect14_x,_stolbiki_rect15_x,
	_stolbiki_rect21_x,_stolbiki_rect22_x,_stolbiki_rect23_x,_stolbiki_rect24_x,_stolbiki_rect25_x,
	_woods_x, _woods_y,_bush_x, _bush_y,_flower_x, _flower_y,_sign_x, _sign_y,
	_plane_x, _plane_y;

public:
	ExampleWindow(
			int width = DEFAULT_WIDTH,
			int height = DEFAULT_HEIGHT);
	virtual ~ExampleWindow() = default;

	virtual void render() override;
	virtual void do_logic() override;
	virtual void handle_keys(const Uint8 *keys) override;
};

#endif /* EXAMPLEWINDOW_H_ */
