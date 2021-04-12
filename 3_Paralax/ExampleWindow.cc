#include "ExampleWindow.h"

#include <stdexcept>
#include <SDL2/SDL_image.h>

ExampleWindow::ExampleWindow(int width, int height)
: Window(width, height),
  _car_x(180), _car_y(530),_sun_x(1500), _sun_y(150),_mounts_x(0),_mounts_y(250),_mounts_x1(1900),_mounts_y1(250),
  _cloud1_x(0),_cloud1_y(60),_cloud3_x(1900),_cloud3_y(60),_cloud2_x(800),_cloud2_y(120),
  _road_x(0),_road_y(650),_road1_x(1900),_road1_y(650),
  _field_x(0),_field_y(150),_field1_x(1900),_field1_y(150),
  _stolbiki_rect11_x(200),_stolbiki_rect12_x(510),_stolbiki_rect13_x(850),_stolbiki_rect14_x(1170),_stolbiki_rect15_x(1500),
  _stolbiki_rect21_x(200),_stolbiki_rect22_x(510),_stolbiki_rect23_x(850),_stolbiki_rect24_x(1170),_stolbiki_rect25_x(1500),
  _woods_x(750),_woods_y(340),_bush_x(2600),_bush_y(500),_flower_x(870), _flower_y(740),
  _sign_x(2700), _sign_y(670),_plane_x(200), _plane_y(150)

{
	_skying = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "skying.png"),
			SDL_DestroyTexture);
		if (_skying == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить небо: ") +
				std::string(SDL_GetError()));
	_sun = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "sun.png"),
				SDL_DestroyTexture);
		if (_sun == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить Солнце: ") +
				std::string(SDL_GetError()));
	_cloud1 = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "cloud1.png"),
				SDL_DestroyTexture);
		if (_cloud1 == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить первый слой облаков: ") +
				std::string(SDL_GetError()));
	_cloud3 = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "cloud3.png"),
				SDL_DestroyTexture);
		if (_cloud3 == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить третий слой облаков: ") +
				std::string(SDL_GetError()));
	_cloud2 = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "cloud2.png"),
				SDL_DestroyTexture);
		if (_cloud2 == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить второй слой облаков: ") +
				std::string(SDL_GetError()));
	_field = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "field.png"),
				SDL_DestroyTexture);
		if (_field == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить поле: ") +
				std::string(SDL_GetError()));
	_field1 = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "field1.png"),
				SDL_DestroyTexture);
		if (_field1 == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить луг: ") +
				std::string(SDL_GetError()));
	_mounts = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "mounts.png"),
				SDL_DestroyTexture);
		if (_mounts == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить горы: ") +
				std::string(SDL_GetError()));
	_mounts1 = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "mounts1.png"),
				SDL_DestroyTexture);
		if (_mounts1 == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить горы: ") +
				std::string(SDL_GetError()));
	_road = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "road.png"),
				SDL_DestroyTexture);
		if (_road == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить дорогу: ") +
				std::string(SDL_GetError()));
	_stolbiki = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "stolbiki.png"),
				SDL_DestroyTexture);
		if (_stolbiki == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить дорожные столбики: ") +
				std::string(SDL_GetError()));
	_car = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "car.png"),
				SDL_DestroyTexture);
		if (_car == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить машину: ") +
				std::string(SDL_GetError()));
	_woods = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "woods.png"),
				SDL_DestroyTexture);
		if (_woods == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить дерево: ") +
				std::string(SDL_GetError()));
	_bush = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "bush.png"),
				SDL_DestroyTexture);
		if (_bush == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить куст: ") +
				std::string(SDL_GetError()));
	_flower = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "flower.png"),
				SDL_DestroyTexture);
		if (_flower == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить цветок: ") +
				std::string(SDL_GetError()));
	_sign = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "sign.png"),
				SDL_DestroyTexture);
		if (_sign == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить дорожный знак: ") +
				std::string(SDL_GetError()));
	_plane = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "plane.png"),
				SDL_DestroyTexture);
		if (_plane == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить самолёт: ") +
				std::string(SDL_GetError()));


}


void ExampleWindow::render()
{
	SDL_SetRenderDrawColor(_renderer.get(), 173, 255, 47, 0);
	SDL_RenderClear(_renderer.get());

	SDL_Rect sky_rect { 0, 0, 1920, 520 };
	SDL_Rect sun_rect { _sun_x, _sun_y, 128, 128 };
	SDL_Rect cloud1_rect { _cloud1_x, _cloud1_y, 1920, 450 };
	SDL_Rect cloud3_rect {_cloud3_x, _cloud3_y, 1920, 450 };
	SDL_Rect cloud2_rect {_cloud2_x, _cloud2_y, 250, 250 };
	SDL_Rect field_rect { _field_x, -_field_y, 1920, 1150 };
	SDL_Rect field1_rect { _field1_x, -_field1_y, 1920, 1150 };
		SDL_Rect mounts_rect { _mounts_x, _mounts_y, 1920, 340 };
		SDL_Rect mounts_rect1 { _mounts_x1, _mounts_y1, 1920, 340 };
	SDL_Rect road_rect { _road_x, _road_y, 1920, 200 };
	SDL_Rect road1_rect { _road1_x, _road1_y, 1920, 200 };
	SDL_Rect stolbiki_rect11 { _stolbiki_rect11_x, 580, 200, 80 };
	SDL_Rect stolbiki_rect12 { _stolbiki_rect12_x, 580, 200, 80 };
	SDL_Rect stolbiki_rect13 { _stolbiki_rect13_x, 580, 200, 80 };
	SDL_Rect stolbiki_rect14 { _stolbiki_rect14_x, 580, 200, 80 };
	SDL_Rect stolbiki_rect15 { _stolbiki_rect15_x, 580, 200, 80 };
		SDL_Rect stolbiki_rect21 { _stolbiki_rect21_x, 753, 220, 100 };
		SDL_Rect stolbiki_rect22 { _stolbiki_rect22_x, 753, 220, 100 };
		SDL_Rect stolbiki_rect23 { _stolbiki_rect23_x, 753, 220, 100 };
		SDL_Rect stolbiki_rect24 { _stolbiki_rect24_x, 753, 220, 100 };
		SDL_Rect stolbiki_rect25 { _stolbiki_rect25_x, 753, 220, 100 };
	SDL_Rect car_rect { _car_x, _car_y, 500, 400 };
	SDL_Rect woods_rect { _woods_x, _woods_y, 600, 300 };
	SDL_Rect bush_rect { _bush_x, _bush_y, 200, 200 };
	SDL_Rect flower_rect { _flower_x, _flower_y, 350, 220 };
	SDL_Rect sign_rect { _sign_x, _sign_y, 200, 200 };
	SDL_Rect plane_rect { _plane_x, _plane_y, 200, 200 };

	SDL_RenderCopy(_renderer.get(), _skying.get(), nullptr, &sky_rect);
	SDL_RenderCopy(_renderer.get(), _cloud2.get(), nullptr, &cloud2_rect);
	SDL_RenderCopy(_renderer.get(), _cloud1.get(), nullptr, &cloud1_rect);
	SDL_RenderCopy(_renderer.get(), _cloud3.get(), nullptr, &cloud3_rect);
	SDL_RenderCopy(_renderer.get(), _sun.get(), nullptr, &sun_rect);
	SDL_RenderCopy(_renderer.get(), _field.get(), nullptr, &field_rect);
	SDL_RenderCopy(_renderer.get(), _field1.get(), nullptr, &field1_rect);
		SDL_RenderCopy(_renderer.get(), _mounts.get(), nullptr, &mounts_rect);
		SDL_RenderCopy(_renderer.get(), _mounts1.get(), nullptr, &mounts_rect1);
	SDL_RenderCopy(_renderer.get(), _woods.get(), nullptr, &woods_rect);
	SDL_RenderCopy(_renderer.get(), _bush.get(), nullptr, &bush_rect);
	SDL_RenderCopy(_renderer.get(), _road.get(), nullptr, &road_rect);
	SDL_RenderCopy(_renderer.get(), _road.get(), nullptr, &road1_rect);
	SDL_RenderCopy(_renderer.get(), _stolbiki.get(), nullptr, &stolbiki_rect11);
	SDL_RenderCopy(_renderer.get(), _stolbiki.get(), nullptr, &stolbiki_rect12);
	SDL_RenderCopy(_renderer.get(), _stolbiki.get(), nullptr, &stolbiki_rect13);
	SDL_RenderCopy(_renderer.get(), _stolbiki.get(), nullptr, &stolbiki_rect14);
	SDL_RenderCopy(_renderer.get(), _stolbiki.get(), nullptr, &stolbiki_rect15);
	SDL_RenderCopy(_renderer.get(), _car.get(), nullptr, &car_rect);
		SDL_RenderCopy(_renderer.get(), _stolbiki.get(), nullptr, &stolbiki_rect21);
		SDL_RenderCopy(_renderer.get(), _stolbiki.get(), nullptr, &stolbiki_rect22);
		SDL_RenderCopy(_renderer.get(), _stolbiki.get(), nullptr, &stolbiki_rect23);
		SDL_RenderCopy(_renderer.get(), _stolbiki.get(), nullptr, &stolbiki_rect24);
		SDL_RenderCopy(_renderer.get(), _stolbiki.get(), nullptr, &stolbiki_rect25);
	SDL_RenderCopy(_renderer.get(), _flower.get(), nullptr, &flower_rect);
	SDL_RenderCopy(_renderer.get(), _sign.get(), nullptr, &sign_rect);
	SDL_RenderCopy(_renderer.get(), _plane.get(), nullptr, &plane_rect);
}

void ExampleWindow::do_logic()
{
	_sun_x -= 1;
		if (_sun_x <= 0)
			_sun_x = 1900;

	_mounts_x -= 2;
		if (_mounts_x <= -width())
			_mounts_x = 1900;
	_mounts_x1 -= 2;
		if (_mounts_x1 <= -width())
			_mounts_x1 = 1900;

	_cloud1_x -= 3;
		if (_cloud1_x <= -width())
			_cloud1_x = 1900;
	_cloud3_x -= 3;
		if (_cloud3_x <= -width())
			_cloud3_x = 1900;
	_cloud2_x -= 3;
		if (_cloud2_x <= 0)
			_cloud2_x = 1900;

	_woods_x -= 3;
		if (_woods_x <= -width())
			_woods_x = 2000;

	_stolbiki_rect11_x -= 4;
		if (_stolbiki_rect11_x <= 0)
			_stolbiki_rect11_x = 1700;
	_stolbiki_rect12_x -= 4;
		if (_stolbiki_rect12_x <= 0)
			_stolbiki_rect12_x = 1700;
	_stolbiki_rect13_x -= 4;
		if (_stolbiki_rect13_x <= 0)
			_stolbiki_rect13_x = 1700;
	_stolbiki_rect14_x -= 4;
		if (_stolbiki_rect14_x <= 0)
			_stolbiki_rect14_x = 1700;
	_stolbiki_rect15_x -= 4;
		if (_stolbiki_rect15_x <= 0)
			_stolbiki_rect15_x = 1700;

	_car_x += 6;
		if (_car_x >= width())
			_car_x = -256;
	_road_x -= 4;
		if (_road_x <= -width())
			_road_x = 1900;
	_road1_x -= 4;
		if (_road1_x <= -width())
			_road1_x = 1900;

	_stolbiki_rect21_x -= 6;
		if (_stolbiki_rect21_x <= 0)
			_stolbiki_rect21_x = 1700;
	_stolbiki_rect22_x -= 6;
		if (_stolbiki_rect22_x <= 0)
			_stolbiki_rect22_x = 1700;
	_stolbiki_rect23_x -= 6;
		if (_stolbiki_rect23_x <= 0)
			_stolbiki_rect23_x = 1700;
	_stolbiki_rect24_x -= 6;
		if (_stolbiki_rect24_x <= 0)
			_stolbiki_rect24_x = 1700;
	_stolbiki_rect25_x -= 6;
		if (_stolbiki_rect25_x <= 0)
			_stolbiki_rect25_x = 1700;

	_bush_x -= 3;
		if (_bush_x <= -width())
			_bush_x = 2000;
	_flower_x -= 5;
		if (_flower_x <= -width())
			_flower_x = 2000;
	_sign_x -= 5;
		if (_sign_x <= -width())
			_sign_x = 2000;

	_field_x -= 3;
		if (_field_x <= -width())
			_field_x = 1900;
	_field1_x -= 3;
		if (_field1_x <= -width())
			_field1_x = 1900;
}


void ExampleWindow::handle_keys(const Uint8 *keys)
{
	if (keys[SDL_SCANCODE_DOWN]){
		if((_plane_y + 6 + 300) < height())
		_plane_y += 6;
	}
	if (keys[SDL_SCANCODE_UP]){
		if((_plane_y - 6 - 100) > 0)
		_plane_y -= 6;
	}

	if (keys[SDL_SCANCODE_LEFT]){
		if((_plane_x - 6 - 200) > 0)
		_plane_x -= 6;
	}

	if (keys[SDL_SCANCODE_RIGHT]){
		if((_plane_x + 6 + 400) < width())
		_plane_x += 6;
	}

}



