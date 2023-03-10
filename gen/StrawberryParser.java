// Generated from java-escape by ANTLR 4.11.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class StrawberryParser extends Parser {
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
		SEq=40, DEq=41, Gt=42, GtEq=43, Lt=44, LtEq=45, And=46, Or=47, PlusEq=48, 
		MinEq=49, MultEq=50, DivEq=51, ModEq=52, PowEq=53, Lbrack=54, Rbrack=55, 
		Lbrace=56, Rbrace=57, Lpar=58, Rpar=59, Ignore=60;
	public static final int
		RULE_script = 0, RULE_numberList = 1;
	private static String[] makeRuleNames() {
		return new String[] {
			"script", "numberList"
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
			"Btick", "Pow", "Star", "Bslash", "Mod", "Plus", "Min", "SEq", "DEq", 
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

	@Override
	public String getGrammarFileName() { return "java-escape"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public StrawberryParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@SuppressWarnings("CheckReturnValue")
	public static class ScriptContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(StrawberryParser.EOF, 0); }
		public List<NumberListContext> numberList() {
			return getRuleContexts(NumberListContext.class);
		}
		public NumberListContext numberList(int i) {
			return getRuleContext(NumberListContext.class,i);
		}
		public List<TerminalNode> Nl() { return getTokens(StrawberryParser.Nl); }
		public TerminalNode Nl(int i) {
			return getToken(StrawberryParser.Nl, i);
		}
		public ScriptContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_script; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof StrawberryParserListener ) ((StrawberryParserListener)listener).enterScript(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof StrawberryParserListener ) ((StrawberryParserListener)listener).exitScript(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof StrawberryParserVisitor ) return ((StrawberryParserVisitor<? extends T>)visitor).visitScript(this);
			else return visitor.visitChildren(this);
		}
	}

	public final ScriptContext script() throws RecognitionException {
		ScriptContext _localctx = new ScriptContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_script);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(8); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(4);
				numberList();
				setState(6);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==Nl) {
					{
					setState(5);
					match(Nl);
					}
				}

				}
				}
				setState(10); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==Number );
			setState(12);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	@SuppressWarnings("CheckReturnValue")
	public static class NumberListContext extends ParserRuleContext {
		public List<TerminalNode> Number() { return getTokens(StrawberryParser.Number); }
		public TerminalNode Number(int i) {
			return getToken(StrawberryParser.Number, i);
		}
		public List<TerminalNode> Sarrow() { return getTokens(StrawberryParser.Sarrow); }
		public TerminalNode Sarrow(int i) {
			return getToken(StrawberryParser.Sarrow, i);
		}
		public NumberListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_numberList; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof StrawberryParserListener ) ((StrawberryParserListener)listener).enterNumberList(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof StrawberryParserListener ) ((StrawberryParserListener)listener).exitNumberList(this);
		}
		@Override
		public <T> T accept(ParseTreeVisitor<? extends T> visitor) {
			if ( visitor instanceof StrawberryParserVisitor ) return ((StrawberryParserVisitor<? extends T>)visitor).visitNumberList(this);
			else return visitor.visitChildren(this);
		}
	}

	public final NumberListContext numberList() throws RecognitionException {
		NumberListContext _localctx = new NumberListContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_numberList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(14);
			match(Number);
			setState(17); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(15);
				match(Sarrow);
				setState(16);
				match(Number);
				}
				}
				setState(19); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==Sarrow );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\u0004\u0001<\u0016\u0002\u0000\u0007\u0000\u0002\u0001\u0007\u0001\u0001"+
		"\u0000\u0001\u0000\u0003\u0000\u0007\b\u0000\u0004\u0000\t\b\u0000\u000b"+
		"\u0000\f\u0000\n\u0001\u0000\u0001\u0000\u0001\u0001\u0001\u0001\u0001"+
		"\u0001\u0004\u0001\u0012\b\u0001\u000b\u0001\f\u0001\u0013\u0001\u0001"+
		"\u0000\u0000\u0002\u0000\u0002\u0000\u0000\u0016\u0000\b\u0001\u0000\u0000"+
		"\u0000\u0002\u000e\u0001\u0000\u0000\u0000\u0004\u0006\u0003\u0002\u0001"+
		"\u0000\u0005\u0007\u0005\u0010\u0000\u0000\u0006\u0005\u0001\u0000\u0000"+
		"\u0000\u0006\u0007\u0001\u0000\u0000\u0000\u0007\t\u0001\u0000\u0000\u0000"+
		"\b\u0004\u0001\u0000\u0000\u0000\t\n\u0001\u0000\u0000\u0000\n\b\u0001"+
		"\u0000\u0000\u0000\n\u000b\u0001\u0000\u0000\u0000\u000b\f\u0001\u0000"+
		"\u0000\u0000\f\r\u0005\u0000\u0000\u0001\r\u0001\u0001\u0000\u0000\u0000"+
		"\u000e\u0011\u0005\u0002\u0000\u0000\u000f\u0010\u0005\t\u0000\u0000\u0010"+
		"\u0012\u0005\u0002\u0000\u0000\u0011\u000f\u0001\u0000\u0000\u0000\u0012"+
		"\u0013\u0001\u0000\u0000\u0000\u0013\u0011\u0001\u0000\u0000\u0000\u0013"+
		"\u0014\u0001\u0000\u0000\u0000\u0014\u0003\u0001\u0000\u0000\u0000\u0003"+
		"\u0006\n\u0013";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}