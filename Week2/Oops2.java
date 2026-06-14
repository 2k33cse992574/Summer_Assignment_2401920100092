interface Playable {
	void play();
}

class Veena implements Playable {
	public void play() {
		System.out.println("Playing Veena");
	}
}

class Saxophone implements Playable {
	public void play() {
		System.out.println("Playing Saxophone");
	}
}

public class Oops2 {
	public static void main(String[] args) {
		Veena veena = new Veena();
		veena.play();

		Saxophone saxophone = new Saxophone();
		saxophone.play();

		Playable playable = veena;
		playable.play();

		playable = saxophone;
		playable.play();
	}
}
