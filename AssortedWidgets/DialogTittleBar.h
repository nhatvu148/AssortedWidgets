#pragma once
#include "DragAble.h"
#include <string>
#include "ThemeEngine.h"

namespace AssortedWidgets
{
	namespace Widgets
	{
		class Dialog;

        class DialogTittleBar: public DragAble
		{
		private:
            std::string m_text;
            Dialog *m_parent;
            unsigned int m_top;
            unsigned int m_bottom;
            unsigned int m_left;
            unsigned int m_right;
		public:
            const std::string& getText() const
			{
                return m_text;
            }
            unsigned int getTop() const
			{
                return m_top;
            }
            unsigned int getBottom() const
			{
                return m_bottom;
            }
            unsigned int getLeft() const
			{
                return m_left;
            }
            unsigned int getRight() const
			{
                return m_right;
            }
			void setDialog(Dialog *_parent)
			{
                m_parent=_parent;
            }
			DialogTittleBar(std::string &_text);
			DialogTittleBar(char *_text);
            Util::Size getPreferedSize()
			{
				return Theme::ThemeEngine::getSingleton().getTheme().getDialogTittleBarPreferedSize(this);
            }
			void paint()
			{
				Theme::ThemeEngine::getSingleton().getTheme().paintDialogTittleBar(this);
            }
			void dragReleased(const Event::MouseEvent &e);
			void dragMoved(int offsetX,int offsetY);
		public:
			~DialogTittleBar(void);
		};
	}
}
