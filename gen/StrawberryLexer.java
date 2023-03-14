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
		Fn=1, Decl=2, If=3, Unless=4, Else=5, While=6, Until=7, For=8, Return=9, 
		Break=10, Next=11, Last=12, Once=13, Id=14, Number=15, String=16, LitString=17, 
		Digit=18, Word=19, UcLetter=20, LcLetter=21, True=22, False=23, Null=24, 
		DefOr=25, Sarrow=26, Darrpw=27, LRarrow=28, RLarrow=29, Dot2=30, Dot3=31, 
		As=32, Uscore=33, AndSign=34, Doll=35, Hash=36, At=37, ExPoint=38, Qmark=39, 
		Colon=40, Semi=41, Fslash=42, Bar=43, Dquote=44, Squote=45, Com=46, Dot=47, 
		Squig=48, Btick=49, Pow=50, Star=51, Bslash=52, Mod=53, Plus=54, Min=55, 
		Eq=56, BoolEq=57, BoolNeq=58, Gt=59, GtEq=60, Lt=61, LtEq=62, And=63, 
		Or=64, PlusEq=65, MinEq=66, MultEq=67, DivEq=68, ModEq=69, PowEq=70, Increm=71, 
		Decrem=72, Lbrack=73, Rbrack=74, Lbrace=75, Rbrace=76, Lpar=77, Rpar=78, 
		Ignore=79;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"Fn", "Decl", "If", "Unless", "Else", "While", "Until", "For", "Return", 
			"Break", "Next", "Last", "Once", "Id", "Number", "String", "LitString", 
			"Digit", "Word", "UcLetter", "LcLetter", "True", "False", "Null", "DefOr", 
			"Sarrow", "Darrpw", "LRarrow", "RLarrow", "Dot2", "Dot3", "As", "Uscore", 
			"AndSign", "Doll", "Hash", "At", "ExPoint", "Qmark", "Colon", "Semi", 
			"Fslash", "Bar", "Dquote", "Squote", "Com", "Dot", "Squig", "Btick", 
			"Pow", "Star", "Bslash", "Mod", "Plus", "Min", "Eq", "BoolEq", "BoolNeq", 
			"Gt", "GtEq", "Lt", "LtEq", "And", "Or", "PlusEq", "MinEq", "MultEq", 
			"DivEq", "ModEq", "PowEq", "Increm", "Decrem", "Lbrack", "Rbrack", "Lbrace", 
			"Rbrace", "Lpar", "Rpar", "Ignore", "WS", "Comment"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'fn'", "'let'", "'if'", "'unless'", "'else'", "'while'", "'until'", 
			"'for'", "'return'", "'break'", "'next'", "'last'", "'once'", null, null, 
			null, null, null, null, null, null, "'true'", "'false'", "'null'", "'\\\\'", 
			"'->'", "'=>'", "'>>'", "'<<'", "'..'", "'...'", "'as'", "'_'", "'&'", 
			"'$'", "'#'", "'@'", "'!'", "'?'", "':'", "';'", "'\\'", "'|'", "'\"'", 
			"'''", "','", "'.'", "'~'", "'`'", "'^'", "'*'", "'/'", "'%'", "'+'", 
			"'-'", "'='", "'=='", "'!='", "'>'", "'>='", "'<'", "'<='", "'&&'", "'||'", 
			"'+='", "'-='", "'*='", "'/='", "'%='", "'^='", "'++'", "'--'", "'['", 
			"']'", "'{'", "'}'", "'('", "')'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "Fn", "Decl", "If", "Unless", "Else", "While", "Until", "For", 
			"Return", "Break", "Next", "Last", "Once", "Id", "Number", "String", 
			"LitString", "Digit", "Word", "UcLetter", "LcLetter", "True", "False", 
			"Null", "DefOr", "Sarrow", "Darrpw", "LRarrow", "RLarrow", "Dot2", "Dot3", 
			"As", "Uscore", "AndSign", "Doll", "Hash", "At", "ExPoint", "Qmark", 
			"Colon", "Semi", "Fslash", "Bar", "Dquote", "Squote", "Com", "Dot", "Squig", 
			"Btick", "Pow", "Star", "Bslash", "Mod", "Plus", "Min", "Eq", "BoolEq", 
			"BoolNeq", "Gt", "GtEq", "Lt", "LtEq", "And", "Or", "PlusEq", "MinEq", 
			"MultEq", "DivEq", "ModEq", "PowEq", "Increm", "Decrem", "Lbrack", "Rbrack", 
			"Lbrace", "Rbrace", "Lpar", "Rpar", "Ignore"
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
		"\u0004\u0000O\u01cd\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002\u0001"+
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
		":\u0002;\u0007;\u0002<\u0007<\u0002=\u0007=\u0002>\u0007>\u0002?\u0007"+
		"?\u0002@\u0007@\u0002A\u0007A\u0002B\u0007B\u0002C\u0007C\u0002D\u0007"+
		"D\u0002E\u0007E\u0002F\u0007F\u0002G\u0007G\u0002H\u0007H\u0002I\u0007"+
		"I\u0002J\u0007J\u0002K\u0007K\u0002L\u0007L\u0002M\u0007M\u0002N\u0007"+
		"N\u0002O\u0007O\u0002P\u0007P\u0001\u0000\u0001\u0000\u0001\u0000\u0001"+
		"\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0002\u0001\u0002\u0001"+
		"\u0002\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001"+
		"\u0004\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001"+
		"\u0005\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001"+
		"\u0006\u0001\u0007\u0001\u0007\u0001\u0007\u0001\u0007\u0001\b\u0001\b"+
		"\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001\t\u0001\t\u0001\t\u0001"+
		"\t\u0001\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001\n\u0001\n\u0001\u000b"+
		"\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0001\f\u0001\r\u0001\r\u0001\r\u0001\r\u0005\r\u00ea\b\r\n"+
		"\r\f\r\u00ed\t\r\u0001\u000e\u0004\u000e\u00f0\b\u000e\u000b\u000e\f\u000e"+
		"\u00f1\u0001\u000e\u0001\u000e\u0004\u000e\u00f6\b\u000e\u000b\u000e\f"+
		"\u000e\u00f7\u0003\u000e\u00fa\b\u000e\u0001\u000f\u0001\u000f\u0005\u000f"+
		"\u00fe\b\u000f\n\u000f\f\u000f\u0101\t\u000f\u0001\u000f\u0001\u000f\u0001"+
		"\u0010\u0001\u0010\u0005\u0010\u0107\b\u0010\n\u0010\f\u0010\u010a\t\u0010"+
		"\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011\u0001\u0012\u0001\u0012"+
		"\u0004\u0012\u0112\b\u0012\u000b\u0012\f\u0012\u0113\u0001\u0013\u0001"+
		"\u0013\u0001\u0014\u0001\u0014\u0001\u0015\u0001\u0015\u0001\u0015\u0001"+
		"\u0015\u0001\u0015\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001"+
		"\u0016\u0001\u0016\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0017\u0001"+
		"\u0017\u0001\u0018\u0001\u0018\u0001\u0018\u0001\u0019\u0001\u0019\u0001"+
		"\u0019\u0001\u001a\u0001\u001a\u0001\u001a\u0001\u001b\u0001\u001b\u0001"+
		"\u001b\u0001\u001c\u0001\u001c\u0001\u001c\u0001\u001d\u0001\u001d\u0001"+
		"\u001d\u0001\u001e\u0001\u001e\u0001\u001e\u0001\u001e\u0001\u001f\u0001"+
		"\u001f\u0001\u001f\u0001 \u0001 \u0001!\u0001!\u0001\"\u0001\"\u0001#"+
		"\u0001#\u0001$\u0001$\u0001%\u0001%\u0001&\u0001&\u0001\'\u0001\'\u0001"+
		"(\u0001(\u0001)\u0001)\u0001*\u0001*\u0001+\u0001+\u0001,\u0001,\u0001"+
		"-\u0001-\u0001.\u0001.\u0001/\u0001/\u00010\u00010\u00011\u00011\u0001"+
		"2\u00012\u00013\u00013\u00014\u00014\u00015\u00015\u00016\u00016\u0001"+
		"7\u00017\u00018\u00018\u00018\u00019\u00019\u00019\u0001:\u0001:\u0001"+
		";\u0001;\u0001;\u0001<\u0001<\u0001=\u0001=\u0001=\u0001>\u0001>\u0001"+
		">\u0001?\u0001?\u0001?\u0001@\u0001@\u0001@\u0001A\u0001A\u0001A\u0001"+
		"B\u0001B\u0001B\u0001C\u0001C\u0001C\u0001D\u0001D\u0001D\u0001E\u0001"+
		"E\u0001E\u0001F\u0001F\u0001F\u0001G\u0001G\u0001G\u0001H\u0001H\u0001"+
		"I\u0001I\u0001J\u0001J\u0001K\u0001K\u0001L\u0001L\u0001M\u0001M\u0001"+
		"N\u0001N\u0003N\u01af\bN\u0001N\u0001N\u0001O\u0004O\u01b4\bO\u000bO\f"+
		"O\u01b5\u0001P\u0001P\u0001P\u0001P\u0005P\u01bc\bP\nP\fP\u01bf\tP\u0001"+
		"P\u0001P\u0001P\u0001P\u0005P\u01c5\bP\nP\fP\u01c8\tP\u0001P\u0001P\u0003"+
		"P\u01cc\bP\u0003\u00ff\u0108\u01c6\u0000Q\u0001\u0001\u0003\u0002\u0005"+
		"\u0003\u0007\u0004\t\u0005\u000b\u0006\r\u0007\u000f\b\u0011\t\u0013\n"+
		"\u0015\u000b\u0017\f\u0019\r\u001b\u000e\u001d\u000f\u001f\u0010!\u0011"+
		"#\u0012%\u0013\'\u0014)\u0015+\u0016-\u0017/\u00181\u00193\u001a5\u001b"+
		"7\u001c9\u001d;\u001e=\u001f? A!C\"E#G$I%K&M\'O(Q)S*U+W,Y-[.]/_0a1c2e"+
		"3g4i5k6m7o8q9s:u;w<y={>}?\u007f@\u0081A\u0083B\u0085C\u0087D\u0089E\u008b"+
		"F\u008dG\u008fH\u0091I\u0093J\u0095K\u0097L\u0099M\u009bN\u009dO\u009f"+
		"\u0000\u00a1\u0000\u0001\u0000\u0005\u0001\u000009\u0001\u0000AZ\u0001"+
		"\u0000az\u0003\u0000\t\n\r\r  \u0002\u0000\n\n\r\r\u01d9\u0000\u0001\u0001"+
		"\u0000\u0000\u0000\u0000\u0003\u0001\u0000\u0000\u0000\u0000\u0005\u0001"+
		"\u0000\u0000\u0000\u0000\u0007\u0001\u0000\u0000\u0000\u0000\t\u0001\u0000"+
		"\u0000\u0000\u0000\u000b\u0001\u0000\u0000\u0000\u0000\r\u0001\u0000\u0000"+
		"\u0000\u0000\u000f\u0001\u0000\u0000\u0000\u0000\u0011\u0001\u0000\u0000"+
		"\u0000\u0000\u0013\u0001\u0000\u0000\u0000\u0000\u0015\u0001\u0000\u0000"+
		"\u0000\u0000\u0017\u0001\u0000\u0000\u0000\u0000\u0019\u0001\u0000\u0000"+
		"\u0000\u0000\u001b\u0001\u0000\u0000\u0000\u0000\u001d\u0001\u0000\u0000"+
		"\u0000\u0000\u001f\u0001\u0000\u0000\u0000\u0000!\u0001\u0000\u0000\u0000"+
		"\u0000#\u0001\u0000\u0000\u0000\u0000%\u0001\u0000\u0000\u0000\u0000\'"+
		"\u0001\u0000\u0000\u0000\u0000)\u0001\u0000\u0000\u0000\u0000+\u0001\u0000"+
		"\u0000\u0000\u0000-\u0001\u0000\u0000\u0000\u0000/\u0001\u0000\u0000\u0000"+
		"\u00001\u0001\u0000\u0000\u0000\u00003\u0001\u0000\u0000\u0000\u00005"+
		"\u0001\u0000\u0000\u0000\u00007\u0001\u0000\u0000\u0000\u00009\u0001\u0000"+
		"\u0000\u0000\u0000;\u0001\u0000\u0000\u0000\u0000=\u0001\u0000\u0000\u0000"+
		"\u0000?\u0001\u0000\u0000\u0000\u0000A\u0001\u0000\u0000\u0000\u0000C"+
		"\u0001\u0000\u0000\u0000\u0000E\u0001\u0000\u0000\u0000\u0000G\u0001\u0000"+
		"\u0000\u0000\u0000I\u0001\u0000\u0000\u0000\u0000K\u0001\u0000\u0000\u0000"+
		"\u0000M\u0001\u0000\u0000\u0000\u0000O\u0001\u0000\u0000\u0000\u0000Q"+
		"\u0001\u0000\u0000\u0000\u0000S\u0001\u0000\u0000\u0000\u0000U\u0001\u0000"+
		"\u0000\u0000\u0000W\u0001\u0000\u0000\u0000\u0000Y\u0001\u0000\u0000\u0000"+
		"\u0000[\u0001\u0000\u0000\u0000\u0000]\u0001\u0000\u0000\u0000\u0000_"+
		"\u0001\u0000\u0000\u0000\u0000a\u0001\u0000\u0000\u0000\u0000c\u0001\u0000"+
		"\u0000\u0000\u0000e\u0001\u0000\u0000\u0000\u0000g\u0001\u0000\u0000\u0000"+
		"\u0000i\u0001\u0000\u0000\u0000\u0000k\u0001\u0000\u0000\u0000\u0000m"+
		"\u0001\u0000\u0000\u0000\u0000o\u0001\u0000\u0000\u0000\u0000q\u0001\u0000"+
		"\u0000\u0000\u0000s\u0001\u0000\u0000\u0000\u0000u\u0001\u0000\u0000\u0000"+
		"\u0000w\u0001\u0000\u0000\u0000\u0000y\u0001\u0000\u0000\u0000\u0000{"+
		"\u0001\u0000\u0000\u0000\u0000}\u0001\u0000\u0000\u0000\u0000\u007f\u0001"+
		"\u0000\u0000\u0000\u0000\u0081\u0001\u0000\u0000\u0000\u0000\u0083\u0001"+
		"\u0000\u0000\u0000\u0000\u0085\u0001\u0000\u0000\u0000\u0000\u0087\u0001"+
		"\u0000\u0000\u0000\u0000\u0089\u0001\u0000\u0000\u0000\u0000\u008b\u0001"+
		"\u0000\u0000\u0000\u0000\u008d\u0001\u0000\u0000\u0000\u0000\u008f\u0001"+
		"\u0000\u0000\u0000\u0000\u0091\u0001\u0000\u0000\u0000\u0000\u0093\u0001"+
		"\u0000\u0000\u0000\u0000\u0095\u0001\u0000\u0000\u0000\u0000\u0097\u0001"+
		"\u0000\u0000\u0000\u0000\u0099\u0001\u0000\u0000\u0000\u0000\u009b\u0001"+
		"\u0000\u0000\u0000\u0000\u009d\u0001\u0000\u0000\u0000\u0001\u00a3\u0001"+
		"\u0000\u0000\u0000\u0003\u00a6\u0001\u0000\u0000\u0000\u0005\u00aa\u0001"+
		"\u0000\u0000\u0000\u0007\u00ad\u0001\u0000\u0000\u0000\t\u00b4\u0001\u0000"+
		"\u0000\u0000\u000b\u00b9\u0001\u0000\u0000\u0000\r\u00bf\u0001\u0000\u0000"+
		"\u0000\u000f\u00c5\u0001\u0000\u0000\u0000\u0011\u00c9\u0001\u0000\u0000"+
		"\u0000\u0013\u00d0\u0001\u0000\u0000\u0000\u0015\u00d6\u0001\u0000\u0000"+
		"\u0000\u0017\u00db\u0001\u0000\u0000\u0000\u0019\u00e0\u0001\u0000\u0000"+
		"\u0000\u001b\u00e5\u0001\u0000\u0000\u0000\u001d\u00ef\u0001\u0000\u0000"+
		"\u0000\u001f\u00fb\u0001\u0000\u0000\u0000!\u0104\u0001\u0000\u0000\u0000"+
		"#\u010d\u0001\u0000\u0000\u0000%\u0111\u0001\u0000\u0000\u0000\'\u0115"+
		"\u0001\u0000\u0000\u0000)\u0117\u0001\u0000\u0000\u0000+\u0119\u0001\u0000"+
		"\u0000\u0000-\u011e\u0001\u0000\u0000\u0000/\u0124\u0001\u0000\u0000\u0000"+
		"1\u0129\u0001\u0000\u0000\u00003\u012c\u0001\u0000\u0000\u00005\u012f"+
		"\u0001\u0000\u0000\u00007\u0132\u0001\u0000\u0000\u00009\u0135\u0001\u0000"+
		"\u0000\u0000;\u0138\u0001\u0000\u0000\u0000=\u013b\u0001\u0000\u0000\u0000"+
		"?\u013f\u0001\u0000\u0000\u0000A\u0142\u0001\u0000\u0000\u0000C\u0144"+
		"\u0001\u0000\u0000\u0000E\u0146\u0001\u0000\u0000\u0000G\u0148\u0001\u0000"+
		"\u0000\u0000I\u014a\u0001\u0000\u0000\u0000K\u014c\u0001\u0000\u0000\u0000"+
		"M\u014e\u0001\u0000\u0000\u0000O\u0150\u0001\u0000\u0000\u0000Q\u0152"+
		"\u0001\u0000\u0000\u0000S\u0154\u0001\u0000\u0000\u0000U\u0156\u0001\u0000"+
		"\u0000\u0000W\u0158\u0001\u0000\u0000\u0000Y\u015a\u0001\u0000\u0000\u0000"+
		"[\u015c\u0001\u0000\u0000\u0000]\u015e\u0001\u0000\u0000\u0000_\u0160"+
		"\u0001\u0000\u0000\u0000a\u0162\u0001\u0000\u0000\u0000c\u0164\u0001\u0000"+
		"\u0000\u0000e\u0166\u0001\u0000\u0000\u0000g\u0168\u0001\u0000\u0000\u0000"+
		"i\u016a\u0001\u0000\u0000\u0000k\u016c\u0001\u0000\u0000\u0000m\u016e"+
		"\u0001\u0000\u0000\u0000o\u0170\u0001\u0000\u0000\u0000q\u0172\u0001\u0000"+
		"\u0000\u0000s\u0175\u0001\u0000\u0000\u0000u\u0178\u0001\u0000\u0000\u0000"+
		"w\u017a\u0001\u0000\u0000\u0000y\u017d\u0001\u0000\u0000\u0000{\u017f"+
		"\u0001\u0000\u0000\u0000}\u0182\u0001\u0000\u0000\u0000\u007f\u0185\u0001"+
		"\u0000\u0000\u0000\u0081\u0188\u0001\u0000\u0000\u0000\u0083\u018b\u0001"+
		"\u0000\u0000\u0000\u0085\u018e\u0001\u0000\u0000\u0000\u0087\u0191\u0001"+
		"\u0000\u0000\u0000\u0089\u0194\u0001\u0000\u0000\u0000\u008b\u0197\u0001"+
		"\u0000\u0000\u0000\u008d\u019a\u0001\u0000\u0000\u0000\u008f\u019d\u0001"+
		"\u0000\u0000\u0000\u0091\u01a0\u0001\u0000\u0000\u0000\u0093\u01a2\u0001"+
		"\u0000\u0000\u0000\u0095\u01a4\u0001\u0000\u0000\u0000\u0097\u01a6\u0001"+
		"\u0000\u0000\u0000\u0099\u01a8\u0001\u0000\u0000\u0000\u009b\u01aa\u0001"+
		"\u0000\u0000\u0000\u009d\u01ae\u0001\u0000\u0000\u0000\u009f\u01b3\u0001"+
		"\u0000\u0000\u0000\u00a1\u01cb\u0001\u0000\u0000\u0000\u00a3\u00a4\u0005"+
		"f\u0000\u0000\u00a4\u00a5\u0005n\u0000\u0000\u00a5\u0002\u0001\u0000\u0000"+
		"\u0000\u00a6\u00a7\u0005l\u0000\u0000\u00a7\u00a8\u0005e\u0000\u0000\u00a8"+
		"\u00a9\u0005t\u0000\u0000\u00a9\u0004\u0001\u0000\u0000\u0000\u00aa\u00ab"+
		"\u0005i\u0000\u0000\u00ab\u00ac\u0005f\u0000\u0000\u00ac\u0006\u0001\u0000"+
		"\u0000\u0000\u00ad\u00ae\u0005u\u0000\u0000\u00ae\u00af\u0005n\u0000\u0000"+
		"\u00af\u00b0\u0005l\u0000\u0000\u00b0\u00b1\u0005e\u0000\u0000\u00b1\u00b2"+
		"\u0005s\u0000\u0000\u00b2\u00b3\u0005s\u0000\u0000\u00b3\b\u0001\u0000"+
		"\u0000\u0000\u00b4\u00b5\u0005e\u0000\u0000\u00b5\u00b6\u0005l\u0000\u0000"+
		"\u00b6\u00b7\u0005s\u0000\u0000\u00b7\u00b8\u0005e\u0000\u0000\u00b8\n"+
		"\u0001\u0000\u0000\u0000\u00b9\u00ba\u0005w\u0000\u0000\u00ba\u00bb\u0005"+
		"h\u0000\u0000\u00bb\u00bc\u0005i\u0000\u0000\u00bc\u00bd\u0005l\u0000"+
		"\u0000\u00bd\u00be\u0005e\u0000\u0000\u00be\f\u0001\u0000\u0000\u0000"+
		"\u00bf\u00c0\u0005u\u0000\u0000\u00c0\u00c1\u0005n\u0000\u0000\u00c1\u00c2"+
		"\u0005t\u0000\u0000\u00c2\u00c3\u0005i\u0000\u0000\u00c3\u00c4\u0005l"+
		"\u0000\u0000\u00c4\u000e\u0001\u0000\u0000\u0000\u00c5\u00c6\u0005f\u0000"+
		"\u0000\u00c6\u00c7\u0005o\u0000\u0000\u00c7\u00c8\u0005r\u0000\u0000\u00c8"+
		"\u0010\u0001\u0000\u0000\u0000\u00c9\u00ca\u0005r\u0000\u0000\u00ca\u00cb"+
		"\u0005e\u0000\u0000\u00cb\u00cc\u0005t\u0000\u0000\u00cc\u00cd\u0005u"+
		"\u0000\u0000\u00cd\u00ce\u0005r\u0000\u0000\u00ce\u00cf\u0005n\u0000\u0000"+
		"\u00cf\u0012\u0001\u0000\u0000\u0000\u00d0\u00d1\u0005b\u0000\u0000\u00d1"+
		"\u00d2\u0005r\u0000\u0000\u00d2\u00d3\u0005e\u0000\u0000\u00d3\u00d4\u0005"+
		"a\u0000\u0000\u00d4\u00d5\u0005k\u0000\u0000\u00d5\u0014\u0001\u0000\u0000"+
		"\u0000\u00d6\u00d7\u0005n\u0000\u0000\u00d7\u00d8\u0005e\u0000\u0000\u00d8"+
		"\u00d9\u0005x\u0000\u0000\u00d9\u00da\u0005t\u0000\u0000\u00da\u0016\u0001"+
		"\u0000\u0000\u0000\u00db\u00dc\u0005l\u0000\u0000\u00dc\u00dd\u0005a\u0000"+
		"\u0000\u00dd\u00de\u0005s\u0000\u0000\u00de\u00df\u0005t\u0000\u0000\u00df"+
		"\u0018\u0001\u0000\u0000\u0000\u00e0\u00e1\u0005o\u0000\u0000\u00e1\u00e2"+
		"\u0005n\u0000\u0000\u00e2\u00e3\u0005c\u0000\u0000\u00e3\u00e4\u0005e"+
		"\u0000\u0000\u00e4\u001a\u0001\u0000\u0000\u0000\u00e5\u00eb\u0003%\u0012"+
		"\u0000\u00e6\u00ea\u0003%\u0012\u0000\u00e7\u00ea\u0003#\u0011\u0000\u00e8"+
		"\u00ea\u0003A \u0000\u00e9\u00e6\u0001\u0000\u0000\u0000\u00e9\u00e7\u0001"+
		"\u0000\u0000\u0000\u00e9\u00e8\u0001\u0000\u0000\u0000\u00ea\u00ed\u0001"+
		"\u0000\u0000\u0000\u00eb\u00e9\u0001\u0000\u0000\u0000\u00eb\u00ec\u0001"+
		"\u0000\u0000\u0000\u00ec\u001c\u0001\u0000\u0000\u0000\u00ed\u00eb\u0001"+
		"\u0000\u0000\u0000\u00ee\u00f0\u0003#\u0011\u0000\u00ef\u00ee\u0001\u0000"+
		"\u0000\u0000\u00f0\u00f1\u0001\u0000\u0000\u0000\u00f1\u00ef\u0001\u0000"+
		"\u0000\u0000\u00f1\u00f2\u0001\u0000\u0000\u0000\u00f2\u00f9\u0001\u0000"+
		"\u0000\u0000\u00f3\u00f5\u0005.\u0000\u0000\u00f4\u00f6\u0003#\u0011\u0000"+
		"\u00f5\u00f4\u0001\u0000\u0000\u0000\u00f6\u00f7\u0001\u0000\u0000\u0000"+
		"\u00f7\u00f5\u0001\u0000\u0000\u0000\u00f7\u00f8\u0001\u0000\u0000\u0000"+
		"\u00f8\u00fa\u0001\u0000\u0000\u0000\u00f9\u00f3\u0001\u0000\u0000\u0000"+
		"\u00f9\u00fa\u0001\u0000\u0000\u0000\u00fa\u001e\u0001\u0000\u0000\u0000"+
		"\u00fb\u00ff\u0003W+\u0000\u00fc\u00fe\t\u0000\u0000\u0000\u00fd\u00fc"+
		"\u0001\u0000\u0000\u0000\u00fe\u0101\u0001\u0000\u0000\u0000\u00ff\u0100"+
		"\u0001\u0000\u0000\u0000\u00ff\u00fd\u0001\u0000\u0000\u0000\u0100\u0102"+
		"\u0001\u0000\u0000\u0000\u0101\u00ff\u0001\u0000\u0000\u0000\u0102\u0103"+
		"\u0003W+\u0000\u0103 \u0001\u0000\u0000\u0000\u0104\u0108\u0003Y,\u0000"+
		"\u0105\u0107\t\u0000\u0000\u0000\u0106\u0105\u0001\u0000\u0000\u0000\u0107"+
		"\u010a\u0001\u0000\u0000\u0000\u0108\u0109\u0001\u0000\u0000\u0000\u0108"+
		"\u0106\u0001\u0000\u0000\u0000\u0109\u010b\u0001\u0000\u0000\u0000\u010a"+
		"\u0108\u0001\u0000\u0000\u0000\u010b\u010c\u0003Y,\u0000\u010c\"\u0001"+
		"\u0000\u0000\u0000\u010d\u010e\u0007\u0000\u0000\u0000\u010e$\u0001\u0000"+
		"\u0000\u0000\u010f\u0112\u0003\'\u0013\u0000\u0110\u0112\u0003)\u0014"+
		"\u0000\u0111\u010f\u0001\u0000\u0000\u0000\u0111\u0110\u0001\u0000\u0000"+
		"\u0000\u0112\u0113\u0001\u0000\u0000\u0000\u0113\u0111\u0001\u0000\u0000"+
		"\u0000\u0113\u0114\u0001\u0000\u0000\u0000\u0114&\u0001\u0000\u0000\u0000"+
		"\u0115\u0116\u0007\u0001\u0000\u0000\u0116(\u0001\u0000\u0000\u0000\u0117"+
		"\u0118\u0007\u0002\u0000\u0000\u0118*\u0001\u0000\u0000\u0000\u0119\u011a"+
		"\u0005t\u0000\u0000\u011a\u011b\u0005r\u0000\u0000\u011b\u011c\u0005u"+
		"\u0000\u0000\u011c\u011d\u0005e\u0000\u0000\u011d,\u0001\u0000\u0000\u0000"+
		"\u011e\u011f\u0005f\u0000\u0000\u011f\u0120\u0005a\u0000\u0000\u0120\u0121"+
		"\u0005l\u0000\u0000\u0121\u0122\u0005s\u0000\u0000\u0122\u0123\u0005e"+
		"\u0000\u0000\u0123.\u0001\u0000\u0000\u0000\u0124\u0125\u0005n\u0000\u0000"+
		"\u0125\u0126\u0005u\u0000\u0000\u0126\u0127\u0005l\u0000\u0000\u0127\u0128"+
		"\u0005l\u0000\u0000\u01280\u0001\u0000\u0000\u0000\u0129\u012a\u0005\\"+
		"\u0000\u0000\u012a\u012b\u0005\\\u0000\u0000\u012b2\u0001\u0000\u0000"+
		"\u0000\u012c\u012d\u0005-\u0000\u0000\u012d\u012e\u0005>\u0000\u0000\u012e"+
		"4\u0001\u0000\u0000\u0000\u012f\u0130\u0005=\u0000\u0000\u0130\u0131\u0005"+
		">\u0000\u0000\u01316\u0001\u0000\u0000\u0000\u0132\u0133\u0005>\u0000"+
		"\u0000\u0133\u0134\u0005>\u0000\u0000\u01348\u0001\u0000\u0000\u0000\u0135"+
		"\u0136\u0005<\u0000\u0000\u0136\u0137\u0005<\u0000\u0000\u0137:\u0001"+
		"\u0000\u0000\u0000\u0138\u0139\u0005.\u0000\u0000\u0139\u013a\u0005.\u0000"+
		"\u0000\u013a<\u0001\u0000\u0000\u0000\u013b\u013c\u0005.\u0000\u0000\u013c"+
		"\u013d\u0005.\u0000\u0000\u013d\u013e\u0005.\u0000\u0000\u013e>\u0001"+
		"\u0000\u0000\u0000\u013f\u0140\u0005a\u0000\u0000\u0140\u0141\u0005s\u0000"+
		"\u0000\u0141@\u0001\u0000\u0000\u0000\u0142\u0143\u0005_\u0000\u0000\u0143"+
		"B\u0001\u0000\u0000\u0000\u0144\u0145\u0005&\u0000\u0000\u0145D\u0001"+
		"\u0000\u0000\u0000\u0146\u0147\u0005$\u0000\u0000\u0147F\u0001\u0000\u0000"+
		"\u0000\u0148\u0149\u0005#\u0000\u0000\u0149H\u0001\u0000\u0000\u0000\u014a"+
		"\u014b\u0005@\u0000\u0000\u014bJ\u0001\u0000\u0000\u0000\u014c\u014d\u0005"+
		"!\u0000\u0000\u014dL\u0001\u0000\u0000\u0000\u014e\u014f\u0005?\u0000"+
		"\u0000\u014fN\u0001\u0000\u0000\u0000\u0150\u0151\u0005:\u0000\u0000\u0151"+
		"P\u0001\u0000\u0000\u0000\u0152\u0153\u0005;\u0000\u0000\u0153R\u0001"+
		"\u0000\u0000\u0000\u0154\u0155\u0005\\\u0000\u0000\u0155T\u0001\u0000"+
		"\u0000\u0000\u0156\u0157\u0005|\u0000\u0000\u0157V\u0001\u0000\u0000\u0000"+
		"\u0158\u0159\u0005\"\u0000\u0000\u0159X\u0001\u0000\u0000\u0000\u015a"+
		"\u015b\u0005\'\u0000\u0000\u015bZ\u0001\u0000\u0000\u0000\u015c\u015d"+
		"\u0005,\u0000\u0000\u015d\\\u0001\u0000\u0000\u0000\u015e\u015f\u0005"+
		".\u0000\u0000\u015f^\u0001\u0000\u0000\u0000\u0160\u0161\u0005~\u0000"+
		"\u0000\u0161`\u0001\u0000\u0000\u0000\u0162\u0163\u0005`\u0000\u0000\u0163"+
		"b\u0001\u0000\u0000\u0000\u0164\u0165\u0005^\u0000\u0000\u0165d\u0001"+
		"\u0000\u0000\u0000\u0166\u0167\u0005*\u0000\u0000\u0167f\u0001\u0000\u0000"+
		"\u0000\u0168\u0169\u0005/\u0000\u0000\u0169h\u0001\u0000\u0000\u0000\u016a"+
		"\u016b\u0005%\u0000\u0000\u016bj\u0001\u0000\u0000\u0000\u016c\u016d\u0005"+
		"+\u0000\u0000\u016dl\u0001\u0000\u0000\u0000\u016e\u016f\u0005-\u0000"+
		"\u0000\u016fn\u0001\u0000\u0000\u0000\u0170\u0171\u0005=\u0000\u0000\u0171"+
		"p\u0001\u0000\u0000\u0000\u0172\u0173\u0005=\u0000\u0000\u0173\u0174\u0005"+
		"=\u0000\u0000\u0174r\u0001\u0000\u0000\u0000\u0175\u0176\u0005!\u0000"+
		"\u0000\u0176\u0177\u0005=\u0000\u0000\u0177t\u0001\u0000\u0000\u0000\u0178"+
		"\u0179\u0005>\u0000\u0000\u0179v\u0001\u0000\u0000\u0000\u017a\u017b\u0005"+
		">\u0000\u0000\u017b\u017c\u0005=\u0000\u0000\u017cx\u0001\u0000\u0000"+
		"\u0000\u017d\u017e\u0005<\u0000\u0000\u017ez\u0001\u0000\u0000\u0000\u017f"+
		"\u0180\u0005<\u0000\u0000\u0180\u0181\u0005=\u0000\u0000\u0181|\u0001"+
		"\u0000\u0000\u0000\u0182\u0183\u0005&\u0000\u0000\u0183\u0184\u0005&\u0000"+
		"\u0000\u0184~\u0001\u0000\u0000\u0000\u0185\u0186\u0005|\u0000\u0000\u0186"+
		"\u0187\u0005|\u0000\u0000\u0187\u0080\u0001\u0000\u0000\u0000\u0188\u0189"+
		"\u0005+\u0000\u0000\u0189\u018a\u0005=\u0000\u0000\u018a\u0082\u0001\u0000"+
		"\u0000\u0000\u018b\u018c\u0005-\u0000\u0000\u018c\u018d\u0005=\u0000\u0000"+
		"\u018d\u0084\u0001\u0000\u0000\u0000\u018e\u018f\u0005*\u0000\u0000\u018f"+
		"\u0190\u0005=\u0000\u0000\u0190\u0086\u0001\u0000\u0000\u0000\u0191\u0192"+
		"\u0005/\u0000\u0000\u0192\u0193\u0005=\u0000\u0000\u0193\u0088\u0001\u0000"+
		"\u0000\u0000\u0194\u0195\u0005%\u0000\u0000\u0195\u0196\u0005=\u0000\u0000"+
		"\u0196\u008a\u0001\u0000\u0000\u0000\u0197\u0198\u0005^\u0000\u0000\u0198"+
		"\u0199\u0005=\u0000\u0000\u0199\u008c\u0001\u0000\u0000\u0000\u019a\u019b"+
		"\u0005+\u0000\u0000\u019b\u019c\u0005+\u0000\u0000\u019c\u008e\u0001\u0000"+
		"\u0000\u0000\u019d\u019e\u0005-\u0000\u0000\u019e\u019f\u0005-\u0000\u0000"+
		"\u019f\u0090\u0001\u0000\u0000\u0000\u01a0\u01a1\u0005[\u0000\u0000\u01a1"+
		"\u0092\u0001\u0000\u0000\u0000\u01a2\u01a3\u0005]\u0000\u0000\u01a3\u0094"+
		"\u0001\u0000\u0000\u0000\u01a4\u01a5\u0005{\u0000\u0000\u01a5\u0096\u0001"+
		"\u0000\u0000\u0000\u01a6\u01a7\u0005}\u0000\u0000\u01a7\u0098\u0001\u0000"+
		"\u0000\u0000\u01a8\u01a9\u0005(\u0000\u0000\u01a9\u009a\u0001\u0000\u0000"+
		"\u0000\u01aa\u01ab\u0005)\u0000\u0000\u01ab\u009c\u0001\u0000\u0000\u0000"+
		"\u01ac\u01af\u0003\u00a1P\u0000\u01ad\u01af\u0003\u009fO\u0000\u01ae\u01ac"+
		"\u0001\u0000\u0000\u0000\u01ae\u01ad\u0001\u0000\u0000\u0000\u01af\u01b0"+
		"\u0001\u0000\u0000\u0000\u01b0\u01b1\u0006N\u0000\u0000\u01b1\u009e\u0001"+
		"\u0000\u0000\u0000\u01b2\u01b4\u0007\u0003\u0000\u0000\u01b3\u01b2\u0001"+
		"\u0000\u0000\u0000\u01b4\u01b5\u0001\u0000\u0000\u0000\u01b5\u01b3\u0001"+
		"\u0000\u0000\u0000\u01b5\u01b6\u0001\u0000\u0000\u0000\u01b6\u00a0\u0001"+
		"\u0000\u0000\u0000\u01b7\u01b8\u0005/\u0000\u0000\u01b8\u01b9\u0005/\u0000"+
		"\u0000\u01b9\u01bd\u0001\u0000\u0000\u0000\u01ba\u01bc\b\u0004\u0000\u0000"+
		"\u01bb\u01ba\u0001\u0000\u0000\u0000\u01bc\u01bf\u0001\u0000\u0000\u0000"+
		"\u01bd\u01bb\u0001\u0000\u0000\u0000\u01bd\u01be\u0001\u0000\u0000\u0000"+
		"\u01be\u01cc\u0001\u0000\u0000\u0000\u01bf\u01bd\u0001\u0000\u0000\u0000"+
		"\u01c0\u01c1\u0005/\u0000\u0000\u01c1\u01c2\u0005*\u0000\u0000\u01c2\u01c6"+
		"\u0001\u0000\u0000\u0000\u01c3\u01c5\t\u0000\u0000\u0000\u01c4\u01c3\u0001"+
		"\u0000\u0000\u0000\u01c5\u01c8\u0001\u0000\u0000\u0000\u01c6\u01c7\u0001"+
		"\u0000\u0000\u0000\u01c6\u01c4\u0001\u0000\u0000\u0000\u01c7\u01c9\u0001"+
		"\u0000\u0000\u0000\u01c8\u01c6\u0001\u0000\u0000\u0000\u01c9\u01ca\u0005"+
		"*\u0000\u0000\u01ca\u01cc\u0005/\u0000\u0000\u01cb\u01b7\u0001\u0000\u0000"+
		"\u0000\u01cb\u01c0\u0001\u0000\u0000\u0000\u01cc\u00a2\u0001\u0000\u0000"+
		"\u0000\u000f\u0000\u00e9\u00eb\u00f1\u00f7\u00f9\u00ff\u0108\u0111\u0113"+
		"\u01ae\u01b5\u01bd\u01c6\u01cb\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}