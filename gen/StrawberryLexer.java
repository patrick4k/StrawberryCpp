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
		Fn=1, Decl=2, If=3, Unless=4, Else=5, While=6, Until=7, For=8, Break=9, 
		Next=10, Last=11, Once=12, Id=13, Number=14, String=15, LitString=16, 
		Digit=17, Word=18, UcLetter=19, LcLetter=20, True=21, False=22, Null=23, 
		DefOr=24, Sarrow=25, Darrpw=26, LRarrow=27, RLarrow=28, Dot2=29, Dot3=30, 
		As=31, Nl=32, Uscore=33, AndSign=34, Doll=35, Hash=36, At=37, ExPoint=38, 
		Qmark=39, Colon=40, Semi=41, Fslash=42, Bar=43, Dquote=44, Squote=45, 
		Com=46, Dot=47, Squig=48, Btick=49, Pow=50, Star=51, Bslash=52, Mod=53, 
		Plus=54, Min=55, Eq=56, BoolEq=57, BoolNeq=58, Gt=59, GtEq=60, Lt=61, 
		LtEq=62, And=63, Or=64, PlusEq=65, MinEq=66, MultEq=67, DivEq=68, ModEq=69, 
		PowEq=70, Lbrack=71, Rbrack=72, Lbrace=73, Rbrace=74, Lpar=75, Rpar=76, 
		Ignore=77;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"Fn", "Decl", "If", "Unless", "Else", "While", "Until", "For", "Break", 
			"Next", "Last", "Once", "Id", "Number", "String", "LitString", "Digit", 
			"Word", "UcLetter", "LcLetter", "True", "False", "Null", "DefOr", "Sarrow", 
			"Darrpw", "LRarrow", "RLarrow", "Dot2", "Dot3", "As", "Nl", "Uscore", 
			"AndSign", "Doll", "Hash", "At", "ExPoint", "Qmark", "Colon", "Semi", 
			"Fslash", "Bar", "Dquote", "Squote", "Com", "Dot", "Squig", "Btick", 
			"Pow", "Star", "Bslash", "Mod", "Plus", "Min", "Eq", "BoolEq", "BoolNeq", 
			"Gt", "GtEq", "Lt", "LtEq", "And", "Or", "PlusEq", "MinEq", "MultEq", 
			"DivEq", "ModEq", "PowEq", "Lbrack", "Rbrack", "Lbrace", "Rbrace", "Lpar", 
			"Rpar", "Ignore", "WS", "Comment"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'fn'", "'let'", "'if'", "'unless'", "'else'", "'while'", "'until'", 
			"'for'", "'break'", "'next'", "'last'", "'once'", null, null, null, null, 
			null, null, null, null, "'true'", "'false'", "'null'", "'\\\\'", "'->'", 
			"'=>'", "'>>'", "'<<'", "'..'", "'...'", "'as'", null, "'_'", "'&'", 
			"'$'", "'#'", "'@'", "'!'", "'?'", "':'", "';'", "'\\'", "'|'", "'\"'", 
			"'''", "','", "'.'", "'~'", "'`'", "'^'", "'*'", "'/'", "'%'", "'+'", 
			"'-'", "'='", "'=='", "'!='", "'>'", "'>='", "'<'", "'<='", "'&&'", "'||'", 
			"'+='", "'-='", "'*='", "'/='", "'%='", "'^='", "'['", "']'", "'{'", 
			"'}'", "'('", "')'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "Fn", "Decl", "If", "Unless", "Else", "While", "Until", "For", 
			"Break", "Next", "Last", "Once", "Id", "Number", "String", "LitString", 
			"Digit", "Word", "UcLetter", "LcLetter", "True", "False", "Null", "DefOr", 
			"Sarrow", "Darrpw", "LRarrow", "RLarrow", "Dot2", "Dot3", "As", "Nl", 
			"Uscore", "AndSign", "Doll", "Hash", "At", "ExPoint", "Qmark", "Colon", 
			"Semi", "Fslash", "Bar", "Dquote", "Squote", "Com", "Dot", "Squig", "Btick", 
			"Pow", "Star", "Bslash", "Mod", "Plus", "Min", "Eq", "BoolEq", "BoolNeq", 
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
		"\u0004\u0000M\u01c1\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002\u0001"+
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
		"N\u0001\u0000\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0001\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0003\u0001\u0003"+
		"\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0003\u0001\u0004"+
		"\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0001\u0005"+
		"\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0006\u0001\u0006"+
		"\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0006\u0001\u0007\u0001\u0007"+
		"\u0001\u0007\u0001\u0007\u0001\b\u0001\b\u0001\b\u0001\b\u0001\b\u0001"+
		"\b\u0001\t\u0001\t\u0001\t\u0001\t\u0001\t\u0001\n\u0001\n\u0001\n\u0001"+
		"\n\u0001\n\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b\u0001\u000b"+
		"\u0001\f\u0001\f\u0001\f\u0001\f\u0005\f\u00df\b\f\n\f\f\f\u00e2\t\f\u0001"+
		"\r\u0004\r\u00e5\b\r\u000b\r\f\r\u00e6\u0001\r\u0001\r\u0004\r\u00eb\b"+
		"\r\u000b\r\f\r\u00ec\u0003\r\u00ef\b\r\u0001\u000e\u0001\u000e\u0005\u000e"+
		"\u00f3\b\u000e\n\u000e\f\u000e\u00f6\t\u000e\u0001\u000e\u0001\u000e\u0001"+
		"\u000f\u0001\u000f\u0005\u000f\u00fc\b\u000f\n\u000f\f\u000f\u00ff\t\u000f"+
		"\u0001\u000f\u0001\u000f\u0001\u0010\u0001\u0010\u0001\u0011\u0001\u0011"+
		"\u0004\u0011\u0107\b\u0011\u000b\u0011\f\u0011\u0108\u0001\u0012\u0001"+
		"\u0012\u0001\u0013\u0001\u0013\u0001\u0014\u0001\u0014\u0001\u0014\u0001"+
		"\u0014\u0001\u0014\u0001\u0015\u0001\u0015\u0001\u0015\u0001\u0015\u0001"+
		"\u0015\u0001\u0015\u0001\u0016\u0001\u0016\u0001\u0016\u0001\u0016\u0001"+
		"\u0016\u0001\u0017\u0001\u0017\u0001\u0017\u0001\u0018\u0001\u0018\u0001"+
		"\u0018\u0001\u0019\u0001\u0019\u0001\u0019\u0001\u001a\u0001\u001a\u0001"+
		"\u001a\u0001\u001b\u0001\u001b\u0001\u001b\u0001\u001c\u0001\u001c\u0001"+
		"\u001c\u0001\u001d\u0001\u001d\u0001\u001d\u0001\u001d\u0001\u001e\u0001"+
		"\u001e\u0001\u001e\u0001\u001f\u0004\u001f\u0139\b\u001f\u000b\u001f\f"+
		"\u001f\u013a\u0001 \u0001 \u0001!\u0001!\u0001\"\u0001\"\u0001#\u0001"+
		"#\u0001$\u0001$\u0001%\u0001%\u0001&\u0001&\u0001\'\u0001\'\u0001(\u0001"+
		"(\u0001)\u0001)\u0001*\u0001*\u0001+\u0001+\u0001,\u0001,\u0001-\u0001"+
		"-\u0001.\u0001.\u0001/\u0001/\u00010\u00010\u00011\u00011\u00012\u0001"+
		"2\u00013\u00013\u00014\u00014\u00015\u00015\u00016\u00016\u00017\u0001"+
		"7\u00018\u00018\u00018\u00019\u00019\u00019\u0001:\u0001:\u0001;\u0001"+
		";\u0001;\u0001<\u0001<\u0001=\u0001=\u0001=\u0001>\u0001>\u0001>\u0001"+
		"?\u0001?\u0001?\u0001@\u0001@\u0001@\u0001A\u0001A\u0001A\u0001B\u0001"+
		"B\u0001B\u0001C\u0001C\u0001C\u0001D\u0001D\u0001D\u0001E\u0001E\u0001"+
		"E\u0001F\u0001F\u0001G\u0001G\u0001H\u0001H\u0001I\u0001I\u0001J\u0001"+
		"J\u0001K\u0001K\u0001L\u0001L\u0003L\u01a3\bL\u0001L\u0001L\u0001M\u0004"+
		"M\u01a8\bM\u000bM\fM\u01a9\u0001N\u0001N\u0001N\u0001N\u0005N\u01b0\b"+
		"N\nN\fN\u01b3\tN\u0001N\u0001N\u0001N\u0001N\u0005N\u01b9\bN\nN\fN\u01bc"+
		"\tN\u0001N\u0001N\u0003N\u01c0\bN\u0003\u00f4\u00fd\u01ba\u0000O\u0001"+
		"\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005\u000b\u0006\r\u0007"+
		"\u000f\b\u0011\t\u0013\n\u0015\u000b\u0017\f\u0019\r\u001b\u000e\u001d"+
		"\u000f\u001f\u0010!\u0011#\u0012%\u0013\'\u0014)\u0015+\u0016-\u0017/"+
		"\u00181\u00193\u001a5\u001b7\u001c9\u001d;\u001e=\u001f? A!C\"E#G$I%K"+
		"&M\'O(Q)S*U+W,Y-[.]/_0a1c2e3g4i5k6m7o8q9s:u;w<y={>}?\u007f@\u0081A\u0083"+
		"B\u0085C\u0087D\u0089E\u008bF\u008dG\u008fH\u0091I\u0093J\u0095K\u0097"+
		"L\u0099M\u009b\u0000\u009d\u0000\u0001\u0000\u0005\u0001\u000009\u0001"+
		"\u0000AZ\u0001\u0000az\u0002\u0000\n\n\r\r\u0002\u0000\t\t  \u01ce\u0000"+
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
		"\u0001\u0000\u0000\u0000\u0000w\u0001\u0000\u0000\u0000\u0000y\u0001\u0000"+
		"\u0000\u0000\u0000{\u0001\u0000\u0000\u0000\u0000}\u0001\u0000\u0000\u0000"+
		"\u0000\u007f\u0001\u0000\u0000\u0000\u0000\u0081\u0001\u0000\u0000\u0000"+
		"\u0000\u0083\u0001\u0000\u0000\u0000\u0000\u0085\u0001\u0000\u0000\u0000"+
		"\u0000\u0087\u0001\u0000\u0000\u0000\u0000\u0089\u0001\u0000\u0000\u0000"+
		"\u0000\u008b\u0001\u0000\u0000\u0000\u0000\u008d\u0001\u0000\u0000\u0000"+
		"\u0000\u008f\u0001\u0000\u0000\u0000\u0000\u0091\u0001\u0000\u0000\u0000"+
		"\u0000\u0093\u0001\u0000\u0000\u0000\u0000\u0095\u0001\u0000\u0000\u0000"+
		"\u0000\u0097\u0001\u0000\u0000\u0000\u0000\u0099\u0001\u0000\u0000\u0000"+
		"\u0001\u009f\u0001\u0000\u0000\u0000\u0003\u00a2\u0001\u0000\u0000\u0000"+
		"\u0005\u00a6\u0001\u0000\u0000\u0000\u0007\u00a9\u0001\u0000\u0000\u0000"+
		"\t\u00b0\u0001\u0000\u0000\u0000\u000b\u00b5\u0001\u0000\u0000\u0000\r"+
		"\u00bb\u0001\u0000\u0000\u0000\u000f\u00c1\u0001\u0000\u0000\u0000\u0011"+
		"\u00c5\u0001\u0000\u0000\u0000\u0013\u00cb\u0001\u0000\u0000\u0000\u0015"+
		"\u00d0\u0001\u0000\u0000\u0000\u0017\u00d5\u0001\u0000\u0000\u0000\u0019"+
		"\u00da\u0001\u0000\u0000\u0000\u001b\u00e4\u0001\u0000\u0000\u0000\u001d"+
		"\u00f0\u0001\u0000\u0000\u0000\u001f\u00f9\u0001\u0000\u0000\u0000!\u0102"+
		"\u0001\u0000\u0000\u0000#\u0106\u0001\u0000\u0000\u0000%\u010a\u0001\u0000"+
		"\u0000\u0000\'\u010c\u0001\u0000\u0000\u0000)\u010e\u0001\u0000\u0000"+
		"\u0000+\u0113\u0001\u0000\u0000\u0000-\u0119\u0001\u0000\u0000\u0000/"+
		"\u011e\u0001\u0000\u0000\u00001\u0121\u0001\u0000\u0000\u00003\u0124\u0001"+
		"\u0000\u0000\u00005\u0127\u0001\u0000\u0000\u00007\u012a\u0001\u0000\u0000"+
		"\u00009\u012d\u0001\u0000\u0000\u0000;\u0130\u0001\u0000\u0000\u0000="+
		"\u0134\u0001\u0000\u0000\u0000?\u0138\u0001\u0000\u0000\u0000A\u013c\u0001"+
		"\u0000\u0000\u0000C\u013e\u0001\u0000\u0000\u0000E\u0140\u0001\u0000\u0000"+
		"\u0000G\u0142\u0001\u0000\u0000\u0000I\u0144\u0001\u0000\u0000\u0000K"+
		"\u0146\u0001\u0000\u0000\u0000M\u0148\u0001\u0000\u0000\u0000O\u014a\u0001"+
		"\u0000\u0000\u0000Q\u014c\u0001\u0000\u0000\u0000S\u014e\u0001\u0000\u0000"+
		"\u0000U\u0150\u0001\u0000\u0000\u0000W\u0152\u0001\u0000\u0000\u0000Y"+
		"\u0154\u0001\u0000\u0000\u0000[\u0156\u0001\u0000\u0000\u0000]\u0158\u0001"+
		"\u0000\u0000\u0000_\u015a\u0001\u0000\u0000\u0000a\u015c\u0001\u0000\u0000"+
		"\u0000c\u015e\u0001\u0000\u0000\u0000e\u0160\u0001\u0000\u0000\u0000g"+
		"\u0162\u0001\u0000\u0000\u0000i\u0164\u0001\u0000\u0000\u0000k\u0166\u0001"+
		"\u0000\u0000\u0000m\u0168\u0001\u0000\u0000\u0000o\u016a\u0001\u0000\u0000"+
		"\u0000q\u016c\u0001\u0000\u0000\u0000s\u016f\u0001\u0000\u0000\u0000u"+
		"\u0172\u0001\u0000\u0000\u0000w\u0174\u0001\u0000\u0000\u0000y\u0177\u0001"+
		"\u0000\u0000\u0000{\u0179\u0001\u0000\u0000\u0000}\u017c\u0001\u0000\u0000"+
		"\u0000\u007f\u017f\u0001\u0000\u0000\u0000\u0081\u0182\u0001\u0000\u0000"+
		"\u0000\u0083\u0185\u0001\u0000\u0000\u0000\u0085\u0188\u0001\u0000\u0000"+
		"\u0000\u0087\u018b\u0001\u0000\u0000\u0000\u0089\u018e\u0001\u0000\u0000"+
		"\u0000\u008b\u0191\u0001\u0000\u0000\u0000\u008d\u0194\u0001\u0000\u0000"+
		"\u0000\u008f\u0196\u0001\u0000\u0000\u0000\u0091\u0198\u0001\u0000\u0000"+
		"\u0000\u0093\u019a\u0001\u0000\u0000\u0000\u0095\u019c\u0001\u0000\u0000"+
		"\u0000\u0097\u019e\u0001\u0000\u0000\u0000\u0099\u01a2\u0001\u0000\u0000"+
		"\u0000\u009b\u01a7\u0001\u0000\u0000\u0000\u009d\u01bf\u0001\u0000\u0000"+
		"\u0000\u009f\u00a0\u0005f\u0000\u0000\u00a0\u00a1\u0005n\u0000\u0000\u00a1"+
		"\u0002\u0001\u0000\u0000\u0000\u00a2\u00a3\u0005l\u0000\u0000\u00a3\u00a4"+
		"\u0005e\u0000\u0000\u00a4\u00a5\u0005t\u0000\u0000\u00a5\u0004\u0001\u0000"+
		"\u0000\u0000\u00a6\u00a7\u0005i\u0000\u0000\u00a7\u00a8\u0005f\u0000\u0000"+
		"\u00a8\u0006\u0001\u0000\u0000\u0000\u00a9\u00aa\u0005u\u0000\u0000\u00aa"+
		"\u00ab\u0005n\u0000\u0000\u00ab\u00ac\u0005l\u0000\u0000\u00ac\u00ad\u0005"+
		"e\u0000\u0000\u00ad\u00ae\u0005s\u0000\u0000\u00ae\u00af\u0005s\u0000"+
		"\u0000\u00af\b\u0001\u0000\u0000\u0000\u00b0\u00b1\u0005e\u0000\u0000"+
		"\u00b1\u00b2\u0005l\u0000\u0000\u00b2\u00b3\u0005s\u0000\u0000\u00b3\u00b4"+
		"\u0005e\u0000\u0000\u00b4\n\u0001\u0000\u0000\u0000\u00b5\u00b6\u0005"+
		"w\u0000\u0000\u00b6\u00b7\u0005h\u0000\u0000\u00b7\u00b8\u0005i\u0000"+
		"\u0000\u00b8\u00b9\u0005l\u0000\u0000\u00b9\u00ba\u0005e\u0000\u0000\u00ba"+
		"\f\u0001\u0000\u0000\u0000\u00bb\u00bc\u0005u\u0000\u0000\u00bc\u00bd"+
		"\u0005n\u0000\u0000\u00bd\u00be\u0005t\u0000\u0000\u00be\u00bf\u0005i"+
		"\u0000\u0000\u00bf\u00c0\u0005l\u0000\u0000\u00c0\u000e\u0001\u0000\u0000"+
		"\u0000\u00c1\u00c2\u0005f\u0000\u0000\u00c2\u00c3\u0005o\u0000\u0000\u00c3"+
		"\u00c4\u0005r\u0000\u0000\u00c4\u0010\u0001\u0000\u0000\u0000\u00c5\u00c6"+
		"\u0005b\u0000\u0000\u00c6\u00c7\u0005r\u0000\u0000\u00c7\u00c8\u0005e"+
		"\u0000\u0000\u00c8\u00c9\u0005a\u0000\u0000\u00c9\u00ca\u0005k\u0000\u0000"+
		"\u00ca\u0012\u0001\u0000\u0000\u0000\u00cb\u00cc\u0005n\u0000\u0000\u00cc"+
		"\u00cd\u0005e\u0000\u0000\u00cd\u00ce\u0005x\u0000\u0000\u00ce\u00cf\u0005"+
		"t\u0000\u0000\u00cf\u0014\u0001\u0000\u0000\u0000\u00d0\u00d1\u0005l\u0000"+
		"\u0000\u00d1\u00d2\u0005a\u0000\u0000\u00d2\u00d3\u0005s\u0000\u0000\u00d3"+
		"\u00d4\u0005t\u0000\u0000\u00d4\u0016\u0001\u0000\u0000\u0000\u00d5\u00d6"+
		"\u0005o\u0000\u0000\u00d6\u00d7\u0005n\u0000\u0000\u00d7\u00d8\u0005c"+
		"\u0000\u0000\u00d8\u00d9\u0005e\u0000\u0000\u00d9\u0018\u0001\u0000\u0000"+
		"\u0000\u00da\u00e0\u0003#\u0011\u0000\u00db\u00df\u0003#\u0011\u0000\u00dc"+
		"\u00df\u0003!\u0010\u0000\u00dd\u00df\u0003A \u0000\u00de\u00db\u0001"+
		"\u0000\u0000\u0000\u00de\u00dc\u0001\u0000\u0000\u0000\u00de\u00dd\u0001"+
		"\u0000\u0000\u0000\u00df\u00e2\u0001\u0000\u0000\u0000\u00e0\u00de\u0001"+
		"\u0000\u0000\u0000\u00e0\u00e1\u0001\u0000\u0000\u0000\u00e1\u001a\u0001"+
		"\u0000\u0000\u0000\u00e2\u00e0\u0001\u0000\u0000\u0000\u00e3\u00e5\u0003"+
		"!\u0010\u0000\u00e4\u00e3\u0001\u0000\u0000\u0000\u00e5\u00e6\u0001\u0000"+
		"\u0000\u0000\u00e6\u00e4\u0001\u0000\u0000\u0000\u00e6\u00e7\u0001\u0000"+
		"\u0000\u0000\u00e7\u00ee\u0001\u0000\u0000\u0000\u00e8\u00ea\u0005.\u0000"+
		"\u0000\u00e9\u00eb\u0003!\u0010\u0000\u00ea\u00e9\u0001\u0000\u0000\u0000"+
		"\u00eb\u00ec\u0001\u0000\u0000\u0000\u00ec\u00ea\u0001\u0000\u0000\u0000"+
		"\u00ec\u00ed\u0001\u0000\u0000\u0000\u00ed\u00ef\u0001\u0000\u0000\u0000"+
		"\u00ee\u00e8\u0001\u0000\u0000\u0000\u00ee\u00ef\u0001\u0000\u0000\u0000"+
		"\u00ef\u001c\u0001\u0000\u0000\u0000\u00f0\u00f4\u0003W+\u0000\u00f1\u00f3"+
		"\t\u0000\u0000\u0000\u00f2\u00f1\u0001\u0000\u0000\u0000\u00f3\u00f6\u0001"+
		"\u0000\u0000\u0000\u00f4\u00f5\u0001\u0000\u0000\u0000\u00f4\u00f2\u0001"+
		"\u0000\u0000\u0000\u00f5\u00f7\u0001\u0000\u0000\u0000\u00f6\u00f4\u0001"+
		"\u0000\u0000\u0000\u00f7\u00f8\u0003W+\u0000\u00f8\u001e\u0001\u0000\u0000"+
		"\u0000\u00f9\u00fd\u0003Y,\u0000\u00fa\u00fc\t\u0000\u0000\u0000\u00fb"+
		"\u00fa\u0001\u0000\u0000\u0000\u00fc\u00ff\u0001\u0000\u0000\u0000\u00fd"+
		"\u00fe\u0001\u0000\u0000\u0000\u00fd\u00fb\u0001\u0000\u0000\u0000\u00fe"+
		"\u0100\u0001\u0000\u0000\u0000\u00ff\u00fd\u0001\u0000\u0000\u0000\u0100"+
		"\u0101\u0003Y,\u0000\u0101 \u0001\u0000\u0000\u0000\u0102\u0103\u0007"+
		"\u0000\u0000\u0000\u0103\"\u0001\u0000\u0000\u0000\u0104\u0107\u0003%"+
		"\u0012\u0000\u0105\u0107\u0003\'\u0013\u0000\u0106\u0104\u0001\u0000\u0000"+
		"\u0000\u0106\u0105\u0001\u0000\u0000\u0000\u0107\u0108\u0001\u0000\u0000"+
		"\u0000\u0108\u0106\u0001\u0000\u0000\u0000\u0108\u0109\u0001\u0000\u0000"+
		"\u0000\u0109$\u0001\u0000\u0000\u0000\u010a\u010b\u0007\u0001\u0000\u0000"+
		"\u010b&\u0001\u0000\u0000\u0000\u010c\u010d\u0007\u0002\u0000\u0000\u010d"+
		"(\u0001\u0000\u0000\u0000\u010e\u010f\u0005t\u0000\u0000\u010f\u0110\u0005"+
		"r\u0000\u0000\u0110\u0111\u0005u\u0000\u0000\u0111\u0112\u0005e\u0000"+
		"\u0000\u0112*\u0001\u0000\u0000\u0000\u0113\u0114\u0005f\u0000\u0000\u0114"+
		"\u0115\u0005a\u0000\u0000\u0115\u0116\u0005l\u0000\u0000\u0116\u0117\u0005"+
		"s\u0000\u0000\u0117\u0118\u0005e\u0000\u0000\u0118,\u0001\u0000\u0000"+
		"\u0000\u0119\u011a\u0005n\u0000\u0000\u011a\u011b\u0005u\u0000\u0000\u011b"+
		"\u011c\u0005l\u0000\u0000\u011c\u011d\u0005l\u0000\u0000\u011d.\u0001"+
		"\u0000\u0000\u0000\u011e\u011f\u0005\\\u0000\u0000\u011f\u0120\u0005\\"+
		"\u0000\u0000\u01200\u0001\u0000\u0000\u0000\u0121\u0122\u0005-\u0000\u0000"+
		"\u0122\u0123\u0005>\u0000\u0000\u01232\u0001\u0000\u0000\u0000\u0124\u0125"+
		"\u0005=\u0000\u0000\u0125\u0126\u0005>\u0000\u0000\u01264\u0001\u0000"+
		"\u0000\u0000\u0127\u0128\u0005>\u0000\u0000\u0128\u0129\u0005>\u0000\u0000"+
		"\u01296\u0001\u0000\u0000\u0000\u012a\u012b\u0005<\u0000\u0000\u012b\u012c"+
		"\u0005<\u0000\u0000\u012c8\u0001\u0000\u0000\u0000\u012d\u012e\u0005."+
		"\u0000\u0000\u012e\u012f\u0005.\u0000\u0000\u012f:\u0001\u0000\u0000\u0000"+
		"\u0130\u0131\u0005.\u0000\u0000\u0131\u0132\u0005.\u0000\u0000\u0132\u0133"+
		"\u0005.\u0000\u0000\u0133<\u0001\u0000\u0000\u0000\u0134\u0135\u0005a"+
		"\u0000\u0000\u0135\u0136\u0005s\u0000\u0000\u0136>\u0001\u0000\u0000\u0000"+
		"\u0137\u0139\u0007\u0003\u0000\u0000\u0138\u0137\u0001\u0000\u0000\u0000"+
		"\u0139\u013a\u0001\u0000\u0000\u0000\u013a\u0138\u0001\u0000\u0000\u0000"+
		"\u013a\u013b\u0001\u0000\u0000\u0000\u013b@\u0001\u0000\u0000\u0000\u013c"+
		"\u013d\u0005_\u0000\u0000\u013dB\u0001\u0000\u0000\u0000\u013e\u013f\u0005"+
		"&\u0000\u0000\u013fD\u0001\u0000\u0000\u0000\u0140\u0141\u0005$\u0000"+
		"\u0000\u0141F\u0001\u0000\u0000\u0000\u0142\u0143\u0005#\u0000\u0000\u0143"+
		"H\u0001\u0000\u0000\u0000\u0144\u0145\u0005@\u0000\u0000\u0145J\u0001"+
		"\u0000\u0000\u0000\u0146\u0147\u0005!\u0000\u0000\u0147L\u0001\u0000\u0000"+
		"\u0000\u0148\u0149\u0005?\u0000\u0000\u0149N\u0001\u0000\u0000\u0000\u014a"+
		"\u014b\u0005:\u0000\u0000\u014bP\u0001\u0000\u0000\u0000\u014c\u014d\u0005"+
		";\u0000\u0000\u014dR\u0001\u0000\u0000\u0000\u014e\u014f\u0005\\\u0000"+
		"\u0000\u014fT\u0001\u0000\u0000\u0000\u0150\u0151\u0005|\u0000\u0000\u0151"+
		"V\u0001\u0000\u0000\u0000\u0152\u0153\u0005\"\u0000\u0000\u0153X\u0001"+
		"\u0000\u0000\u0000\u0154\u0155\u0005\'\u0000\u0000\u0155Z\u0001\u0000"+
		"\u0000\u0000\u0156\u0157\u0005,\u0000\u0000\u0157\\\u0001\u0000\u0000"+
		"\u0000\u0158\u0159\u0005.\u0000\u0000\u0159^\u0001\u0000\u0000\u0000\u015a"+
		"\u015b\u0005~\u0000\u0000\u015b`\u0001\u0000\u0000\u0000\u015c\u015d\u0005"+
		"`\u0000\u0000\u015db\u0001\u0000\u0000\u0000\u015e\u015f\u0005^\u0000"+
		"\u0000\u015fd\u0001\u0000\u0000\u0000\u0160\u0161\u0005*\u0000\u0000\u0161"+
		"f\u0001\u0000\u0000\u0000\u0162\u0163\u0005/\u0000\u0000\u0163h\u0001"+
		"\u0000\u0000\u0000\u0164\u0165\u0005%\u0000\u0000\u0165j\u0001\u0000\u0000"+
		"\u0000\u0166\u0167\u0005+\u0000\u0000\u0167l\u0001\u0000\u0000\u0000\u0168"+
		"\u0169\u0005-\u0000\u0000\u0169n\u0001\u0000\u0000\u0000\u016a\u016b\u0005"+
		"=\u0000\u0000\u016bp\u0001\u0000\u0000\u0000\u016c\u016d\u0005=\u0000"+
		"\u0000\u016d\u016e\u0005=\u0000\u0000\u016er\u0001\u0000\u0000\u0000\u016f"+
		"\u0170\u0005!\u0000\u0000\u0170\u0171\u0005=\u0000\u0000\u0171t\u0001"+
		"\u0000\u0000\u0000\u0172\u0173\u0005>\u0000\u0000\u0173v\u0001\u0000\u0000"+
		"\u0000\u0174\u0175\u0005>\u0000\u0000\u0175\u0176\u0005=\u0000\u0000\u0176"+
		"x\u0001\u0000\u0000\u0000\u0177\u0178\u0005<\u0000\u0000\u0178z\u0001"+
		"\u0000\u0000\u0000\u0179\u017a\u0005<\u0000\u0000\u017a\u017b\u0005=\u0000"+
		"\u0000\u017b|\u0001\u0000\u0000\u0000\u017c\u017d\u0005&\u0000\u0000\u017d"+
		"\u017e\u0005&\u0000\u0000\u017e~\u0001\u0000\u0000\u0000\u017f\u0180\u0005"+
		"|\u0000\u0000\u0180\u0181\u0005|\u0000\u0000\u0181\u0080\u0001\u0000\u0000"+
		"\u0000\u0182\u0183\u0005+\u0000\u0000\u0183\u0184\u0005=\u0000\u0000\u0184"+
		"\u0082\u0001\u0000\u0000\u0000\u0185\u0186\u0005-\u0000\u0000\u0186\u0187"+
		"\u0005=\u0000\u0000\u0187\u0084\u0001\u0000\u0000\u0000\u0188\u0189\u0005"+
		"*\u0000\u0000\u0189\u018a\u0005=\u0000\u0000\u018a\u0086\u0001\u0000\u0000"+
		"\u0000\u018b\u018c\u0005/\u0000\u0000\u018c\u018d\u0005=\u0000\u0000\u018d"+
		"\u0088\u0001\u0000\u0000\u0000\u018e\u018f\u0005%\u0000\u0000\u018f\u0190"+
		"\u0005=\u0000\u0000\u0190\u008a\u0001\u0000\u0000\u0000\u0191\u0192\u0005"+
		"^\u0000\u0000\u0192\u0193\u0005=\u0000\u0000\u0193\u008c\u0001\u0000\u0000"+
		"\u0000\u0194\u0195\u0005[\u0000\u0000\u0195\u008e\u0001\u0000\u0000\u0000"+
		"\u0196\u0197\u0005]\u0000\u0000\u0197\u0090\u0001\u0000\u0000\u0000\u0198"+
		"\u0199\u0005{\u0000\u0000\u0199\u0092\u0001\u0000\u0000\u0000\u019a\u019b"+
		"\u0005}\u0000\u0000\u019b\u0094\u0001\u0000\u0000\u0000\u019c\u019d\u0005"+
		"(\u0000\u0000\u019d\u0096\u0001\u0000\u0000\u0000\u019e\u019f\u0005)\u0000"+
		"\u0000\u019f\u0098\u0001\u0000\u0000\u0000\u01a0\u01a3\u0003\u009dN\u0000"+
		"\u01a1\u01a3\u0003\u009bM\u0000\u01a2\u01a0\u0001\u0000\u0000\u0000\u01a2"+
		"\u01a1\u0001\u0000\u0000\u0000\u01a3\u01a4\u0001\u0000\u0000\u0000\u01a4"+
		"\u01a5\u0006L\u0000\u0000\u01a5\u009a\u0001\u0000\u0000\u0000\u01a6\u01a8"+
		"\u0007\u0004\u0000\u0000\u01a7\u01a6\u0001\u0000\u0000\u0000\u01a8\u01a9"+
		"\u0001\u0000\u0000\u0000\u01a9\u01a7\u0001\u0000\u0000\u0000\u01a9\u01aa"+
		"\u0001\u0000\u0000\u0000\u01aa\u009c\u0001\u0000\u0000\u0000\u01ab\u01ac"+
		"\u0005/\u0000\u0000\u01ac\u01ad\u0005/\u0000\u0000\u01ad\u01b1\u0001\u0000"+
		"\u0000\u0000\u01ae\u01b0\b\u0003\u0000\u0000\u01af\u01ae\u0001\u0000\u0000"+
		"\u0000\u01b0\u01b3\u0001\u0000\u0000\u0000\u01b1\u01af\u0001\u0000\u0000"+
		"\u0000\u01b1\u01b2\u0001\u0000\u0000\u0000\u01b2\u01c0\u0001\u0000\u0000"+
		"\u0000\u01b3\u01b1\u0001\u0000\u0000\u0000\u01b4\u01b5\u0005/\u0000\u0000"+
		"\u01b5\u01b6\u0005*\u0000\u0000\u01b6\u01ba\u0001\u0000\u0000\u0000\u01b7"+
		"\u01b9\t\u0000\u0000\u0000\u01b8\u01b7\u0001\u0000\u0000\u0000\u01b9\u01bc"+
		"\u0001\u0000\u0000\u0000\u01ba\u01bb\u0001\u0000\u0000\u0000\u01ba\u01b8"+
		"\u0001\u0000\u0000\u0000\u01bb\u01bd\u0001\u0000\u0000\u0000\u01bc\u01ba"+
		"\u0001\u0000\u0000\u0000\u01bd\u01be\u0005*\u0000\u0000\u01be\u01c0\u0005"+
		"/\u0000\u0000\u01bf\u01ab\u0001\u0000\u0000\u0000\u01bf\u01b4\u0001\u0000"+
		"\u0000\u0000\u01c0\u009e\u0001\u0000\u0000\u0000\u0010\u0000\u00de\u00e0"+
		"\u00e6\u00ec\u00ee\u00f4\u00fd\u0106\u0108\u013a\u01a2\u01a9\u01b1\u01ba"+
		"\u01bf\u0001\u0006\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}