/******************************************************************************
 *                        HYPERGRAPH FOR MCMTT
 ******************************************************************************
 *               .__                           __.
 *                \ `\~~---..---~~~~~~--.---~~| /   
 *                 `~-.   `                   .~         _____ 
 *                     ~.                .--~~    .---~~~    /
 *                      / .-.      .-.      |  <~~        __/
 *                     |  |_|      |_|       \  \     .--'
 *                    /-.      -       .-.    |  \_   \_
 *                    \-'   -..-..-    `-'    |    \__  \_ 
 *                     `.                     |     _/  _/
 *                     ~-                .,-\   _/  _/
 *                      /                 -~~~~\ /_  /_
 *                     |               /   |    \  \_  \_ 
 *                     |   /          /   /      | _/  _/
 *                     |  |          |   /    .,-|/  _/ 
 *                     )__/           \_/    -~~~| _/
 *                       \                      /  \
 *                        |           |        /_---` 
 *                        \    .______|      ./
 *                        (   /        \    /
 *                        `--'          /__/
 *
 ******************************************************************************/

#include <stdio.h>

#include "HyperGraphTracker.h"

int main(int argc, char* argv[])
{
	CSetting SET("settings.txt");
	CHyperGraphTracker hgTracker;

	hgTracker.Initialize(SET);
	hgTracker.ConstructHyperGraph();

	return 0;
}

//()()
//('')HAANJU.YOO

