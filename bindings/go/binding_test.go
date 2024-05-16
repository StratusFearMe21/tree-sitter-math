package tree_sitter_math_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-math"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_math.Language())
	if language == nil {
		t.Errorf("Error loading Math grammar")
	}
}
