// TMOGUIRightBar.h: interface for the TMOGUIRightBar class.
//
//////////////////////////////////////////////////////////////////////
#ifndef TMOGUI_RBAR_H
#define TMOGUI_RBAR_H
#include <qtabwidget.h>
//Added by qt3to4:
#include <QResizeEvent>

class QWidget;
class QPushButton;
class TMOGUIToneMapping;
class TMOGUIFilters;
class TMO;

class TMOGUIRightBar : public QTabWidget  
{
	Q_OBJECT
public:
    TMOGUIRightBar( QWidget* parent = 0, const char* name = 0, Qt::WindowFlags f = 0 );
	virtual ~TMOGUIRightBar();
	virtual TMO* GetTMO();
	virtual TMOGUIToneMapping* GetMapping() {return pToneMapping;}

protected:

	void resizeEvent ( QResizeEvent * );
    QWidget* pVBox; // TODO Q3VBox
	QPushButton* pRightButton;
	TMOGUIFilters* pFilters;
	QTabWidget* pTabWidget;
	TMOGUIToneMapping* pToneMapping;
	bool bVisible;

friend class TMOGUIWindow;	

public slots:
	void hideright();

signals:
	void closeBar();
};

#endif // TMOGUI_RBAR_H
