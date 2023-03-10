// Generated from java-escape by ANTLR 4.11.1
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link TParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface TParserVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link TParser#script}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitScript(TParser.ScriptContext ctx);
	/**
	 * Visit a parse tree produced by {@link TParser#numberList}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumberList(TParser.NumberListContext ctx);
}