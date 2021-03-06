#ifndef MAIN_WINDOW
#define MAIN_WINDOW

#include <QtGui>
#include "caracs.h"
#include "equipement.h"
#include "sac.h"
#include "competences.h"
#include "dons.h"
#include "rolePlay.h"

class MainWindow : public QMainWindow
{
	Q_OBJECT // Macro pour la création de signal/slot
	
private:
	// Onglets des différentes pages
	QTabWidget * menuOnglets;
	
	Caracs * ongletCaracs;
	Equipement * ongletEquipement;
	Sac * ongletSac;
	Competences * ongletCompetences;
	Dons * ongletDons;
	RolePlay * ongletRP;
	
public:
	MainWindow();
	
private slots:

};
#endif //MAIN_WINDOW
