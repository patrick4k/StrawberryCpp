// Generated from java-escape by ANTLR 4.11.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link TParser}.
 */
public interface TParserListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link TParser#script}.
	 * @param ctx the parse tree
	 */
	void enterScript(TParser.ScriptContext ctx);
	/**
	 * Exit a parse tree produced by {@link TParser#script}.
	 * @param ctx the parse tree
	 */
	void exitScript(TParser.ScriptContext ctx);
	/**
	 * Enter a parse tree produced by {@link TParser#numberList}.
	 * @param ctx the parse tree
	 */
	void enterNumberList(TParser.NumberListContext ctx);
	/**
	 * Exit a parse tree produced by {@link TParser#numberList}.
	 * @param ctx the parse tree
	 */
	void exitNumberList(TParser.NumberListContext ctx);
}