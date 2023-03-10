// Generated from java-escape by ANTLR 4.11.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link StrawberryParser}.
 */
public interface StrawberryParserListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link StrawberryParser#script}.
	 * @param ctx the parse tree
	 */
	void enterScript(StrawberryParser.ScriptContext ctx);
	/**
	 * Exit a parse tree produced by {@link StrawberryParser#script}.
	 * @param ctx the parse tree
	 */
	void exitScript(StrawberryParser.ScriptContext ctx);
	/**
	 * Enter a parse tree produced by {@link StrawberryParser#numberList}.
	 * @param ctx the parse tree
	 */
	void enterNumberList(StrawberryParser.NumberListContext ctx);
	/**
	 * Exit a parse tree produced by {@link StrawberryParser#numberList}.
	 * @param ctx the parse tree
	 */
	void exitNumberList(StrawberryParser.NumberListContext ctx);
}