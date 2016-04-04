<?php

use Behat\Behat\Context\Context;
use Behat\Behat\Context\SnippetAcceptingContext;
use Behat\Gherkin\Node\PyStringNode;
use Behat\Gherkin\Node\TableNode;
use Behat\Behat\Hook\Scope\AfterFeatureScope;
use Behat\MinkExtension\Context\MinkContext;
use WembassyContext;

/**
 * Defines application features from the specific context.
 */
class FeatureContext extends WembassyContext
{
    /**
     * Initializes context.
     *
     * Every scenario gets its own context instance.
     * You can also pass arbitrary arguments to the
     * context constructor through behat.yml.
     */
    public function __construct()
    {
    }

  /**
   * @When /^I search for "([^"]*)"$/
   */
  public function iSearchFor($arg1)
  {
    $this->fillField('Search', $arg1);
    $this->pressButton('Search');
  }

}
