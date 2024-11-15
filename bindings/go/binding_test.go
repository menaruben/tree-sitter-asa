package tree_sitter_asa_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-asa"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_asa.Language())
	if language == nil {
		t.Errorf("Error loading Asa grammar")
	}
}
