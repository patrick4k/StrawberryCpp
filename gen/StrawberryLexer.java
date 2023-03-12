// Generated from java-escape by ANTLR 4.11.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class StrawberryLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.11.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		Id=1, Number=2, String=3, LitString=4, Digit=5, Word=6, UcLetter=7, LcLetter=8, 
		Sarrow=9, Darrpw=10, LRarrow=11, RLarrow=12, Dot2=13, Dot3=14, As=15, 
		Nl=16, Uscore=17, AndSign=18, Doll=19, Hash=20, At=21, ExPoint=22, Qmark=23, 
		Colon=24, Semi=25, Fslash=26, Bar=27, Dquote=28, Squote=29, Com=30, Dot=31, 
		Squig=32, Btick=33, Pow=34, Star=35, Bslash=36, Mod=37, Plus=38, Min=39, 
		Eq=40, BoolEq=41, Gt=42, GtEq=43, Lt=44, LtEq=45, And=46, Or=47, PlusEq=48, 
		MinEq=49, MultEq=50, DivEq=51, ModEq=52, PowEq=53, Lbrack=54, Rbrack=55, 
		Lbrace=56, Rbrace=57, Lpar=58, Rpar=59, Ignore=60;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"Id", "Number", "String", "LitString", "Digit", "Word", "UcLetter", "LcLetter", 
			"Sarrow", "Darrpw", "LRarrow", "RLarrow", "Dot2", "Dot3", "As", "Nl", 
			"Uscore", "AndSign", "Doll", "Hash", "At", "ExPoint", "Qmark", "Colon", 
			"Semi", "Fslash", "Bar", "Dquote", "Squote", "Com", "Dot", "Squig", "Btick", 
			"Pow", "Star", "Bslash", "Mod", "Plus", "Min", "Eq", "BoolEq", "Gt", 
			"GtEq", "Lt", "LtEq", "And", "Or", "PlusEq", "MinEq", "MultEq", "DivEq", 
			"ModEq", "PowEq", "Lbrack", "Rbrack", "Lbrace", "Rbrace", "Lpar", "Rpar", 
			"Ignore", "WS", "Comment"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, "'->'", "'=>'", 
			"'>>'", "'<<'", "'..'", "'...'", "'as'", null, "'_'", "'&'", "'$'", "'#'", 
			"'@'", "'!'", "'?'", "':'", "';'", "'\\'", "'|'", "'\"'", "'''", "','", 
			"'.'", "'~'", "'`'", "'^'", "'*'", "'/'", "'%'", "'+'", "'-'", "'='", 
			"'=='", "'>'", "'>='", "'<'", "'<='", "'and'", "'or'", "'+='", "'-='", 
			"'*='", "'/='", "'%='", "'^='", "'['", "']'", "'{'", "'}'", "'('", "')'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "Id", "Number", "String", "LitString", "Digit", "Word", "UcLetter", 
			"LcLetter", "Sarrow", "Darrpw", "LRarrow", "RLarrow", "Dot2", "Dot3", 
			"As", "Nl", "Uscore", "AndSign", "Doll", "Hash", "At", "ExPoint", "Qmark", 
			"Colon", "Semi", "Fslash", "Bar", "Dquote", "Squote", "Com", "Dot", "Squig", 
			"Btick", "Pow", "Star", "Bslash", "Mod", "Plus", "Min", "Eq", "BoolEq", 
			"Gt", "GtEq", "Lt", "LtEq", "And", "Or", "PlusEq", "MinEq", "MultEq", 
			"DivEq", "ModEq", "PowEq", "Lbrack", "Rbrack", "Lbrace", "Rbrace", "Lpar", 
			"Rpar", "Ignore"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public StrawberryLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "StrawberryLexer.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000<\u014f\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002\u0001"+
		"\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002\u0004"+
		"\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002\u0007"+
		"\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002\u000b"+
		"\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e\u0002"+
		"\u000f\u0007\u000f\u0002\u0010\u0007\u0010\u0002\u0011\u0007\u0011\u0002"+
		"\u0012\u0007\u0012\u0002\u0013\u0007\u0013\u0002\u0014\u0007\u0014\u0002"+
		"\u0015\u0007\u0015\u0002\u0016\u0007\u0016\u0002\u0017\u0007\u0017\u0002"+
		"\u0018\u0007\u0018\u0002\u0019\u0007\u0019\u0002\u001a\u0007\u001a\u0002"+
		"\u001b\u0007\u001b\u0002\u001c\u0007\u001c\u0002\u001d\u0007\u001d\u0002"+
		"\u001e\u0007\u001e\u0002\u001f\u0007\u001f\u0002 \u0007 \u0002!\u0007"+
		"!\u0002\"\u0007\"\u0002#\u0007#\u0002$\u0007$\u0002%\u0007%\u0002&\u0007"+
		"&\u0002\'\u0007\'\u0002(\u0007(\u0002)\u0007)\u0002*\u0007*\u0002+\u0007"+
		"+\u0002,\u0007,\u0002-\u0007-\u0002.\u0007.\u0002/\u0007/\u00020\u0007"+
		"0\u00021\u00071\u00022\u00072\u00023\u00073\u00024\u00074\u00025\u0007"+
		"5\u00026\u00076\u00027\u00077\u00028\u00078\u00029\u00079\u0002:\u0007"+
		":\u0002;\u0007;\u0002<\u0007<\u0002=\u0007=\u0001\u0000\u0001\u0000\u0001"+
		"\u0000\u0001\u0000\u0005\u0000\u0082\b\u0000\n\u0000\f\u0000\u0085\t\u0000"+
		"\u0001\u0001\u0004\u0001\u0088\b\u0001\u000b\u0001\f\u0001\u0089\u0001"+
		"\u0001\u0001\u0001\u0004\u0001\u008e\b\u0001\u000b\u0001\f\u0001\u008f"+
		"\u0003\u0001\u0092\b\u0001\u0001\u0002\u0001\u0002\u0005\u0002\u0096\b"+
		"\u0002\n\u0002\f\u0002\u0099\t\u0002\u0001\u0002\u0001\u0002\u0001\u0003"+
		"\u0001\u0003\u0005\u0003\u009f\b\u0003\n\u0003\f\u0003\u00a2\t\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005\u0004"+
		"\u0005\u00aa\b\u0005\u000b\u0005\f\u0005\u00ab\u0001\u0006\u0001\u0006"+
		"\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\b\u0001\t\u0001\t\u0001"+
		"\t\u0001\n\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\u000b\u0001\f"+
		"\u0001\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\r\u0001\u000e\u0001\u000e"+
		"\u0001\u000e\u0001\u000f\u0004\u000f\u00c9\b\u000f\u000b\u000f\f\u000f"+
		"\u00ca\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0012\u0001"+
		"\u0012\u0001\u0013\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0015\u0001"+
		"\u0015\u0001\u0016\u0001\u0016\u0001\u0017\u0001\u0017\u0001\u0018\u0001"+
		"\u0018\u0001\u0019\u0001\u0019\u0001\u001a\u0001\u001a\u0001\u001b\u0001"+
		"\u001b\u0001\u001c\u0001\u001c\u0001\u001d\u0001\u001d\u0001\u001e\u0001"+
		"\u001e\u0001\u001f\u0001\u001f\u0001 \u0001 \u0001!\u0001!\u0001\"\u0001"+
		"\"\u0001#\u0001#\u0001$\u0001$\u0001%\u0001%\u0001&\u0001&\u0001\'\u0001"+
		"\'\u0001(\u0001(\u0001(\u0001)\u0001)\u0001*\u0001*\u0001*\u0001+\u0001"+
		"+\u0001,\u0001,\u0001,\u0001-\u0001-\u0001-\u0001-\u0001.\u0001.\u0001"+
		".\u0001/\u0001/\u0001/\u00010\u00010\u00010\u00011\u00011\u00011\u0001"+
		"2\u00012\u00012\u00013\u00013\u00013\u00014\u00014\u00014\u00015\u0001"+
		"5\u00016\u00016\u00017\u00017\u00018\u00018\u00019\u00019\u0001:\u0001"+
		":\u0001;\u0001;\u0003;\u0131\b;\u0001;\u0001;\u0001<\u0004<\u0136\b<\u000b"+
		"<\f<\u0137\u0001=\u0001=\u0001=\u0001=\u0005=\u013e\b=\n=\f=\u0141\t="+
		"\u0001=\u0001=\u0001=\u0001=\u0005=\u0147\b=\n=\f=\u014a\t=\u0001=\u0001"+
		"=\u0003=\u014e\b=\u0003\u0097\u00a0\u0148\u0000>\u0001\u0001\u0003\u0002"+
		"\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006\r\u0007\u000f\b\u0011\t\u0013"+
		"\n\u0015\u000b\u0017\f\u0019\r\u001b\u000e\u001d\u000f\u001f\u0010!\u0011"+
		"#\u0012%\u0013\'\u0014)\u0015+\u0016-\u0017/\u00181\u00193\u001a5\u001b"+
		"7\u001c9\u001d;\u001e=\u001f? A!C\"E#G$I%K&M\'O(Q)S*U+W,Y-[.]/_0a1c2e"+
		"3g4i5k6m7o8q9s:u;w<y\u0000{\u0000\u0001\u0000\u0005\u0001\u000009\u0001"+
		"\u0000AZ\u0001\u0000az\u0002\u0000\n\n\r\r\u0002\u0000\t\t  \u015c\u0000"+
		"\u0001\u0001\u0000\u0000\u0000\u0000\u0003\u0001\u0000\u0000\u0000\u0000"+
		"\u0005\u0001\u0000\u0000\u0000\u0000\u0007\u0001\u0000\u0000\u0000\u0000"+
		"\t\u0001\u0000\u0000\u0000\u0000\u000b\u0001\u0000\u0000\u0000\u0000\r"+
		"\u0001\u0000\u0000\u0000\u0000\u000f\u0001\u0000\u0000\u0000\u0000\u0011"+
		"\u0001\u0000\u0000\u0000\u0000\u0013\u0001\u0000\u0000\u0000\u0000\u0015"+
		"\u0001\u0000\u0000\u0000\u0000\u0017\u0001\u0000\u0000\u0000\u0000\u0019"+
		"\u0001\u0000\u0000\u0000\u0000\u001b\u0001\u0000\u0000\u0000\u0000\u001d"+
		"\u0001\u0000\u0000\u0000\u0000\u001f\u0001\u0000\u0000\u0000\u0000!\u0001"+
		"\u0000\u0000\u0000\u0000#\u0001\u0000\u0000\u0000\u0000%\u0001\u0000\u0000"+
		"\u0000\u0000\'\u0001\u0000\u0000\u0000\u0000)\u0001\u0000\u0000\u0000"+
		"\u0000+\u0001\u0000\u0000\u0000\u0000-\u0001\u0000\u0000\u0000\u0000/"+
		"\u0001\u0000\u0000\u0000\u00001\u0001\u0000\u0000\u0000\u00003\u0001\u0000"+
		"\u0000\u0000\u00005\u0001\u0000\u0000\u0000\u00007\u0001\u0000\u0000\u0000"+
		"\u00009\u0001\u0000\u0000\u0000\u0000;\u0001\u0000\u0000\u0000\u0000="+
		"\u0001\u0000\u0000\u0000\u0000?\u0001\u0000\u0000\u0000\u0000A\u0001\u0000"+
		"\u0000\u0000\u0000C\u0001\u0000\u0000\u0000\u0000E\u0001\u0000\u0000\u0000"+
		"\u0000G\u0001\u0000\u0000\u0000\u0000I\u0001\u0000\u0000\u0000\u0000K"+
		"\u0001\u0000\u0000\u0000\u0000M\u0001\u0000\u0000\u0000\u0000O\u0001\u0000"+
		"\u0000\u0000\u0000Q\u0001\u0000\u0000\u0000\u0000S\u0001\u0000\u0000\u0000"+
		"\u0000U\u0001\u0000\u0000\u0000\u0000W\u0001\u0000\u0000\u0000\u0000Y"+
		"\u0001\u0000\u0000\u0000\u0000[\u0001\u0000\u0000\u0000\u0000]\u0001\u0000"+
		"\u0000\u0000\u0000_\u0001\u0000\u0000\u0000\u0000a\u0001\u0000\u0000\u0000"+
		"\u0000c\u0001\u0000\u0000\u0000\u0000e\u0001\u0000\u0000\u0000\u0000g"+
		"\u0001\u0000\u0000\u0000\u0000i\u0001\u0000\u0000\u0000\u0000k\u0001\u0000"+
		"\u0000\u0000\u0000m\u0001\u0000\u0000\u0000\u0000o\u0001\u0000\u0000\u0000"+
		"\u0000q\u0001\u0000\u0000\u0000\u0000s\u0001\u0000\u0000\u0000\u0000u"+
		"\u0001\u0000\u0000\u0000\u0000w\u0001\u0000\u0000\u0000\u0001}\u0001\u0000"+
		"\u0000\u0000\u0003\u0087\u0001\u0000\u0000\u0000\u0005\u0093\u0001\u0000"+
		"\u0000\u0000\u0007\u009c\u0001\u0000\u0000\u0000\t\u00a5\u0001\u0000\u0000"+
		"\u0000\u000b\u00a9\u0001\u0000\u0000\u0000\r\u00ad\u0001\u0000\u0000\u0000"+
		"\u000f\u00af\u0001\u0000\u0000\u0000\u0011\u00b1\u0001\u0000\u0000\u0000"+
		"\u0013\u00b4\u0001\u0000\u0000\u0000\u0015\u00b7\u0001\u0000\u0000\u0000"+
		"\u0017\u00ba\u0001\u0000\u0000\u0000\u0019\u00bd\u0001\u0000\u0000\u0000"+
		"\u001b\u00c0\u0001\u0000\u0000\u0000\u001d\u00c4\u0001\u0000\u0000\u0000"+
		"\u001f\u00c8\u0001\u0000\u0000\u0000!\u00cc\u0001\u0000\u0000\u0000#\u00ce"+
		"\u0001\u0000\u0000\u0000%\u00d0\u0001\u0000\u0000\u0000\'\u00d2\u0001"+
		"\u0000\u0000\u0000)\u00d4\u0001\u0000\u0000\u0000+\u00d6\u0001\u0000\u0000"+
		"\u0000-\u00d8\u0001\u0000\u0000\u0000/\u00da\u0001\u0000\u0000\u00001"+
		"\u00dc\u0001\u0000\u0000\u00003\u00de\u0001\u0000\u0000\u00005\u00e0\u0001"+
		"\u0000\u0000\u00007\u00e2\u0001\u0000\u0000\u00009\u00e4\u0001\u0000\u0000"+
		"\u0000;\u00e6\u0001\u0000\u0000\u0000=\u00e8\u0001\u0000\u0000\u0000?"+
		"\u00ea\u0001\u0000\u0000\u0000A\u00ec\u0001\u0000\u0000\u0000C\u00ee\u0001"+
		"\u0000\u0000\u0000E\u00f0\u0001\u0000\u0000\u0000G\u00f2\u0001\u0000\u0000"+
		"\u0000I\u00f4\u0001\u0000\u0000\u0000K\u00f6\u0001\u0000\u0000\u0000M"+
		"\u00f8\u0001\u0000\u0000\u0000O\u00fa\u0001\u0000\u0000\u0000Q\u00fc\u0001"+
		"\u0000\u0000\u0000S\u00ff\u0001\u0000\u0000\u0000U\u0101\u0001\u0000\u0000"+
		"\u0000W\u0104\u0001\u0000\u0000\u0000Y\u0106\u0001\u0000\u0000\u0000["+
		"\u0109\u0001\u0000\u0000\u0000]\u010d\u0001\u0000\u0000\u0000_\u0110\u0001"+
		"\u0000\u0000\u0000a\u0113\u0001\u0000\u0000\u0000c\u0116\u0001\u0000\u0000"+
		"\u0000e\u0119\u0001\u0000\u0000\u0000g\u011c\u0001\u0000\u0000\u0000i"+
		"\u011f\u0001\u0000\u0000\u0000k\u0122\u0001\u0000\u0000\u0000m\u0124\u0001"+
		"\u0000\u0000\u0000o\u0126\u0001\u0000\u0000\u0000q\u0128\u0001\u0000\u0000"+
		"\u0000s\u012a\u0001\u0000\u0000\u0000u\u012c\u0001\u0000\u0000\u0000w"+
		"\u0130\u0001\u0000\u0000\u0000y\u0135\u0001\u0000\u0000\u0000{\u014d\u0001"+
		"\u0000\u0000\u0000}\u0083\u0003\u000b\u0005\u0000~\u0082\u0003\u000b\u0005"+
		"\u0000\u007f\u0082\u0003\t\u0004\u0000\u0080\u0082\u0003!\u0010\u0000"+
		"\u0081~\u0001\u0000\u0000\u0000\u0081\u007f\u0001\u0000\u0000\u0000\u0081"+
		"\u0080\u0001\u0000\u0000\u0000\u0082\u0085\u0001\u0000\u0000\u0000\u0083"+
		"\u0081\u0001\u0000\u0000\u0000\u0083\u0084\u0001\u0000\u0000\u0000\u0084"+
		"\u0002\u0001\u0000\u0000\u0000\u0085\u0083\u0001\u0000\u0000\u0000\u0086"+
		"\u0088\u0003\t\u0004\u0000\u0087\u0086\u0001\u0000\u0000\u0000\u0088\u0089"+
		"\u0001\u0000\u0000\u0000\u0089\u0087\u0001\u0000\u0000\u0000\u0089\u008a"+
		"\u0001\u0000\u0000\u0000\u008a\u0091\u0001\u0000\u0000\u0000\u008b\u008d"+
		"\u0005.\u0000\u0000\u008c\u008e\u0003\t\u0004\u0000\u008d\u008c\u0001"+
		"\u0000\u0000\u0000\u008e\u008f\u0001\u0000\u0000\u0000\u008f\u008d\u0001"+
		"\u0000\u0000\u0000\u008f\u0090\u0001\u0000\u0000\u0000\u0090\u0092\u0001"+
		"\u0000\u0000\u0000\u0091\u008b\u0001\u0000\u0000\u0000\u0091\u0092\u0001"+
		"\u0000\u0000\u0000\u0092\u0004\u0001\u0000\u0000\u0000\u0093\u0097\u0003"+
		"7\u001b\u0000\u0094\u0096\t\u0000\u0000\u0000\u0095\u0094\u0001\u0000"+
		"\u0000\u0000\u0096\u0099\u0001\u0000\u0000\u0000\u0097\u0098\u0001\u0000"+
		"\u0000\u0000\u0097\u0095\u0001\u0000\u0000\u0000\u0098\u009a\u0001\u0000"+
		"\u0000\u0000\u0099\u0097\u0001\u0000\u0000\u0000\u009a\u009b\u00037\u001b"+
		"\u0000\u009b\u0006\u0001\u0000\u0000\u0000\u009c\u00a0\u00039\u001c\u0000"+
		"\u009d\u009f\t\u0000\u0000\u0000\u009e\u009d\u0001\u0000\u0000\u0000\u009f"+
		"\u00a2\u0001\u0000\u0000\u0000\u00a0\u00a1\u0001\u0000\u0000\u0000\u00a0"+
		"\u009e\u0001\u0000\u0000\u0000\u00a1\u00a3\u0001\u0000\u0000\u0000\u00a2"+
		"\u00a0\u0001\u0000\u0000\u0000\u00a3\u00a4\u00039\u001c\u0000\u00a4\b"+
		"\u0001\u0000\u0000\u0000\u00a5\u00a6\u0007\u0000\u0000\u0000\u00a6\n\u0001"+
		"\u0000\u0000\u0000\u00a7\u00aa\u0003\r\u0006\u0000\u00a8\u00aa\u0003\u000f"+
		"\u0007\u0000\u00a9\u00a7\u0001\u0000\u0000\u0000\u00a9\u00a8\u0001\u0000"+
		"\u0000\u0000\u00aa\u00ab\u0001\u0000\u0000\u0000\u00ab\u00a9\u0001\u0000"+
		"\u0000\u0000\u00ab\u00ac\u0001\u0000\u0000\u0000\u00ac\f\u0001\u0000\u0000"+
		"\u0000\u00ad\u00ae\u0007\u0001\u0000\u0000\u00ae\u000e\u0001\u0000\u0000"+
		"\u0000\u00af\u00b0\u0007\u0002\u0000\u0000\u00b0\u0010\u0001\u0000\u0000"+
		"\u0000\u00b1\u00b2\u0005-\u0000\u0000\u00b2\u00b3\u0005>\u0000\u0000\u00b3"+
		"\u0012\u0001\u0000\u0000\u0000\u00b4\u00b5\u0005=\u0000\u0000\u00b5\u00b6"+
		"\u0005>\u0000\u0000\u00b6\u0014\u0001\u0000\u0000\u0000\u00b7\u00b8\u0005"+
		">\u0000\u0000\u00b8\u00b9\u0005>\u0000\u0000\u00b9\u0016\u0001\u0000\u0000"+
		"\u0000\u00ba\u00bb\u0005<\u0000\u0000\u00bb\u00bc\u0005<\u0000\u0000\u00bc"+
		"\u0018\u0001\u0000\u0000\u0000\u00bd\u00be\u0005.\u0000\u0000\u00be\u00bf"+
		"\u0005.\u0000\u0000\u00bf\u001a\u0001\u0000\u0000\u0000\u00c0\u00c1\u0005"+
		".\u0000\u0000\u00c1\u00c2\u0005.\u0000\u0000\u00c2\u00c3\u0005.\u0000"+
		"\u0000\u00c3\u001c\u0001\u0000\u0000\u0000\u00c4\u00c5\u0005a\u0000\u0000"+
		"\u00c5\u00c6\u0005s\u0000\u0000\u00c6\u001e\u0001\u0000\u0000\u0000\u00c7"+
		"\u00c9\u0007\u0003\u0000\u0000\u00c8\u00c7\u0001\u0000\u0000\u0000\u00c9"+
		"\u00ca\u0001\u0000\u0000\u0000\u00ca\u00c8\u0001\u0000\u0000\u0000\u00ca"+
		"\u00cb\u0001\u0000\u0000\u0000\u00cb \u0001\u0000\u0000\u0000\u00cc\u00cd"+
		"\u0005_\u0000\u0000\u00cd\"\u0001\u0000\u0000\u0000\u00ce\u00cf\u0005"+
		"&\u0000\u0000\u00cf$\u0001\u0000\u0000\u0000\u00d0\u00d1\u0005$\u0000"+
		"\u0000\u00d1&\u0001\u0000\u0000\u0000\u00d2\u00d3\u0005#\u0000\u0000\u00d3"+
		"(\u0001\u0000\u0000\u0000\u00d4\u00d5\u0005@\u0000\u0000\u00d5*\u0001"+
		"\u0000\u0000\u0000\u00d6\u00d7\u0005!\u0000\u0000\u00d7,\u0001\u0000\u0000"+
		"\u0000\u00d8\u00d9\u0005?\u0000\u0000\u00d9.\u0001\u0000\u0000\u0000\u00da"+
		"\u00db\u0005:\u0000\u0000\u00db0\u0001\u0000\u0000\u0000\u00dc\u00dd\u0005"+
		";\u0000\u0000\u00dd2\u0001\u0000\u0000\u0000\u00de\u00df\u0005\\\u0000"+
		"\u0000\u00df4\u0001\u0000\u0000\u0000\u00e0\u00e1\u0005|\u0000\u0000\u00e1"+
		"6\u0001\u0000\u0000\u0000\u00e2\u00e3\u0005\"\u0000\u0000\u00e38\u0001"+
		"\u0000\u0000\u0000\u00e4\u00e5\u0005\'\u0000\u0000\u00e5:\u0001\u0000"+
		"\u0000\u0000\u00e6\u00e7\u0005,\u0000\u0000\u00e7<\u0001\u0000\u0000\u0000"+
		"\u00e8\u00e9\u0005.\u0000\u0000\u00e9>\u0001\u0000\u0000\u0000\u00ea\u00eb"+
		"\u0005~\u0000\u0000\u00eb@\u0001\u0000\u0000\u0000\u00ec\u00ed\u0005`"+
		"\u0000\u0000\u00edB\u0001\u0000\u0000\u0000\u00ee\u00ef\u0005^\u0000\u0000"+
		"\u00efD\u0001\u0000\u0000\u0000\u00f0\u00f1\u0005*\u0000\u0000\u00f1F"+
		"\u0001\u0000\u0000\u0000\u00f2\u00f3\u0005/\u0000\u0000\u00f3H\u0001\u0000"+
		"\u0000\u0000\u00f4\u00f5\u0005%\u0000\u0000\u00f5J\u0001\u0000\u0000\u0000"+
		"\u00f6\u00f7\u0005+\u0000\u0000\u00f7L\u0001\u0000\u0000\u0000\u00f8\u00f9"+
		"\u0005-\u0000\u0000\u00f9N\u0001\u0000\u0000\u0000\u00fa\u00fb\u0005="+
		"\u0000\u0000\u00fbP\u0001\u0000\u0000\u0000\u00fc\u00fd\u0005=\u0000\u0000"+
		"\u00fd\u00fe\u0005=\u0000\u0000\u00feR\u0001\u0000\u0000\u0000\u00ff\u0100"+
		"\u0005>\u0000\u0000\u0100T\u0001\u0000\u0000\u0000\u0101\u0102\u0005>"+
		"\u0000\u0000\u0102\u0103\u0005=\u0000\u0000\u0103V\u0001\u0000\u0000\u0000"+
		"\u0104\u0105\u0005<\u0000\u0000\u0105X\u0001\u0000\u0000\u0000\u0106\u0107"+
		"\u0005<\u0000\u0000\u0107\u0108\u0005=\u0000\u0000\u0108Z\u0001\u0000"+
		"\u0000\u0000\u0109\u010a\u0005a\u0000\u0000\u010a\u010b\u0005n\u0000\u0000"+
		"\u010b\u010c\u0005d\u0000\u0000\u010c\\\u0001\u0000\u0000\u0000\u010d"+
		"\u010e\u0005o\u0000\u0000\u010e\u010f\u0005r\u0000\u0000\u010f^\u0001"+
		"\u0000\u0000\u0000\u0110\u0111\u0005+\u0000\u0000\u0111\u0112\u0005=\u0000"+
		"\u0000\u0112`\u0001\u0000\u0000\u0000\u0113\u0114\u0005-\u0000\u0000\u0114"+
		"\u0115\u0005=\u0000\u0000\u0115b\u0001\u0000\u0000\u0000\u0116\u0117\u0005"+
		"*\u0000\u0000\u0117\u0118\u0005=\u0000\u0000\u0118d\u0001\u0000\u0000"+
		"\u0000\u0119\u011a\u0005/\u0000\u0000\u011a\u011b\u0005=\u0000\u0000\u011b"+
		"f\u0001\u0000\u0000\u0000\u011c\u011d\u0005%\u0000\u0000\u011d\u011e\u0005"+
		"=\u0000\u0000\u011eh\u0001\u0000\u0000\u0000\u011f\u0120\u0005^\u0000"+
		"\u0000\u0120\u0121\u0005=\u0000\u0000\u0121j\u0001\u0000\u0000\u0000\u0122"+
		"\u0123\u0005[\u0000\u0000\u0123l\u0001\u0000\u0000\u0000\u0124\u0125\u0005"+
		"]\u0000\u0000\u0125n\u0001\u0000\u0000\u0000\u0126\u0127\u0005{\u0000"+
		"\u0000\u0127p\u0001\u0000\u0000\u0000\u0128\u0129\u0005}\u0000\u0000\u0129"+
		"r\u0001\u0000\u0000\u0000\u012a\u012b\u0005(\u0000\u0000\u012bt\u0001"+
		"\u0000\u0000\u0000\u012c\u012d\u0005)\u0000\u0000\u012dv\u0001\u0000\u0000"+
		"\u0000\u012e\u0131\u0003{=\u0000\u012f\u0131\u0003y<\u0000\u0130\u012e"+
		"\u0001\u0000\u0000\u0000\u0130\u012f\u0001\u0000\u0000\u0000\u0131\u0132"+
		"\u0001\u0000\u0000\u0000\u0132\u0133\u0006;\u0000\u0000\u0133x\u0001\u0000"+
		"\u0000\u0000\u0134\u0136\u0007\u0004\u0000\u0000\u0135\u0134\u0001\u0000"+
		"\u0000\u0000\u0136\u0137\u0001\u0000\u0000\u0000\u0137\u0135\u0001\u0000"+
		"\u0000\u0000\u0137\u0138\u0001\u0000\u0000\u0000\u0138z\u0001\u0000\u0000"+
		"\u0000\u0139\u013a\u0005/\u0000\u0000\u013a\u013b\u0005/\u0000\u0000\u013b"+
		"\u013f\u0001\u0000\u0000\u0000\u013c\u013e\b\u0003\u0000\u0000\u013d\u013c"+
		"\u0001\u0000\u0000\u0000\u013e\u0141\u0001\u0000\u0000\u0000\u013f\u013d"+
		"\u0001\u0000\u0000\u0000\u013f\u0140\u0001\u0000\u0000\u0000\u0140\u014e"+
		"\u0001\u0000\u0000\u0000\u0141\u013f\u0001\u0000\u0000\u0000\u0142\u0143"+
		"\u0005/\u0000\u0000\u0143\u0144\u0005*\u0000\u0000\u0144\u0148\u0001\u0000"+
		"\u0000\u0000\u0145\u0147\t\u0000\u0000\u0000\u0146\u0145\u0001\u0000\u0000"+
		"\u0000\u0147\u014a\u0001\u0000\u0000\u0000\u0148\u0149\u0001\u0000\u0000"+
		"\u0000\u0148\u0146\u0001\u0000\u0000\u0000\u0149\u014b\u0001\u0000\u0000"+
		"\u0000\u014a\u0148\u0001\u0000\u0000\u0000\u014b\u014c\u0005*\u0000\u0000"+
		"\u014c\u014e\u0005/\u0000\u0000\u014d\u0139\u0001\u0000\u0000\u0000\u014d"+
		"\u0142\u0001\u0000\u0000\u0000\u014e|\u0001\u0000\u0000\u0000\u0010\u0000"+
		"\u0081\u0083\u0089\u008f\u0091\u0097\u00a0\u00a9\u00ab\u00ca\u0130\u0137"+
		"\u013f\u0148\u014d\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}