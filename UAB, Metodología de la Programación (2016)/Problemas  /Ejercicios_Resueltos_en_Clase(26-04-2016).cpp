// --------------------------------------------------------------------------------
// --------------------------------------------------------------------------------

/**
*	EJERCICIOS RESUELTOS EN CLASE DÍA 26-04-2016:
*/

// --------------------------------------------------------------------------------
// --------------------------------------------------------------------------------

/**
*
*
*/

class PilaCarta
{
public: 
	PilaCarta();
	~PilaCarta();
	void push(Carta& carta);
	void pop();
	Carta& top() const;
	bool esBuida() const;
	void creaBaralla();
	void remenaBaralla();
	void pinta();
private:
	NodeCarta* m_top;
}

/**
*
*/

void PilaCarta::push(Carta& carta)
{
	NodeCarta *aux = new NodeCarta;
	aux -> setCarta(carta);
	aux -> setNext(m_top);
	m_top = aux;   
}

/**
* 
*/

void PilaCarta::pop()
{
	NodeCarta *aux = m_top;
	m_top = m_top -> getNext();
	delete aux;
}

/**
*
*/

Carta& PilaCarta::top()
{
	return m_top -> getCarta();
}

// --------------------------------------------------------------------------------
// --------------------------------------------------------------------------------

/**
*
*
*/

class NodeCarta
{
public:
	NodeCarta();
	~NodeCarta();
	void setCarta(Carta& c);
	void setNext(NodeCarta* n);
	Carta& getCarta();
	NodeCarta* getNext() const;
private:
	Carta m_carta;
	NodeCarta* m_next;
}


// --------------------------------------------------------------------------------
// --------------------------------------------------------------------------------

/**
*
*
*/

class Joc
{
public:
	Joc();
	~Joc();
	bool BarallaBuida();
	bool treureCArtaBaralla();
	bool posarSortidaABaralla();
	bool posarCartaAPal(int pal);
	void creaBaralla();
	void remenaBaralla();
	bool partidaAcabada();
	int menu();
	void pintaPartida();
private:
	PilaCarta m_Baralla;
	PilaCarta m_Sortida;
	PilaCarta m_pals[N_PALS];
	const int CORS = 0;
	const int DIAMANTS = 1;
	const int PIQUES = 2;
	const int TREVOLS = 3;
	const int AS = 1;
	const int J = 11;
	const int Q = 12;
	const int K = 13;
	const int NUM_MAX_CARTES = 52;
	const int N_CARTA = 13;
	const int N_PALS = 4;
}

/**
* No sé dónde cullons va ....

bool correcte = false;
if (!m_Sortida.esBuida())
{
	if ( pal == (m_Sortida.top()).getPal())
	{
		if ((m_Sortida.top()).getValor() == ((m_Pals[pal].top()).getValor())+1	)
		{
			// movimierto
			m_pals[pal].push( m_Sortida.top() );
			//
			correcte = true;
		}
		
	}
}
return correcte;
  
 */