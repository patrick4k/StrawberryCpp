// Generated from java-escape by ANTLR 4.11.1
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link StrawberryParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface StrawberryParserVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link StrawberryParser#script}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitScript(StrawberryParser.ScriptContext ctx);
	/**
	 * Visit a parse tree produced by {@link StrawberryParser#numberList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumberList(StrawberryParser.NumberListContext ctx);
}