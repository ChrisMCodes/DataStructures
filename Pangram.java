import java.util.HashSet;
class Pangram {
    public boolean checkIfPangram(String sentence) {
        HashSet<Character> alphabet = new HashSet<>();
        
        for (int i = 0; i < sentence.length(); i++) {
            alphabet.add(sentence.charAt(i));
        }
        return alphabet.size() == 26;
    }
}