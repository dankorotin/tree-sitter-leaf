module.exports = grammar({
  name: 'leaf',

  rules: {
    // The production rules of the context-free grammar
    source_file: $ => 'hello'
  }
});
