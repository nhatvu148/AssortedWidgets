#pragma once
#include "AbstractButton.h"
#include <string>
#include "ThemeEngine.h"

namespace AssortedWidgets
{
	namespace Widgets
	{
		class Button:public AbstractButton
		{
		private:
			std::string text;
		public:
			std::string getText()
			{
				return text;
			};

			Util::Size getPreferedSize()
			{
				return Theme::ThemeEngine::getSingleton().getTheme().getButtonPreferedSize(this);
			};

			void paint()
			{
				Theme::ThemeEngine::getSingleton().getTheme().paintButton(this);
			};

			Button(std::string &_text);
			Button(char *_text);
		public:
			~Button(void);
		};
	}
}